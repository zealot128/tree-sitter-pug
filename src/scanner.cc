#include <cstring>
#include <cwctype>
#include <stdio.h>
#include <tree_sitter/parser.h>
#include <vector>

namespace {
using std::vector;

enum TokenType { _NEWLINE, _INDENT, _DEDENT };

struct Scanner {
  Scanner() { deserialize(nullptr, 0); }

  unsigned serialize(char *buffer) {
    size_t i = 0;

    // TODO: think about... isn't that problematic?
    /*
    size_t stack_size = delimiter_stack.size();
    if (stack_size > UINT8_MAX) stack_size = UINT8_MAX;
    buffer[i++] = stack_size;

    memcpy(&buffer[i], delimiter_stack.data(), stack_size);
    i += stack_size;
    */

    vector<uint16_t>::iterator iter = indent_length_stack.begin() + 1,
                               end = indent_length_stack.end();

    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = *iter;
    }

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    indent_length_stack.clear();
    indent_length_stack.push_back(0);

    if (length > 0) {
      for (size_t i = 0; i < length; ++i) {
        indent_length_stack.push_back(buffer[i]);
      }
      return;
    }
  }

  void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

  void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (lexer->lookahead == '\n') {
      if (valid_symbols[_NEWLINE]) {
        skip(lexer);
        lexer->result_symbol = _NEWLINE;
        return true;
      } else
        return false;
    }

    if (lexer->lookahead && lexer->get_column(lexer) == 0) {
      uint32_t indent_length = 0;

      // Indent tokens are zero width
      lexer->mark_end(lexer);

      for (;;) {
        if (lexer->lookahead == ' ') {
          indent_length++;
          skip(lexer);
        } else if (lexer->lookahead == '\t') {
          indent_length += 8; // TODO: double check if this is fine
          skip(lexer);
        } else
          break;
      }

      if (indent_length > indent_length_stack.back() &&
          valid_symbols[_INDENT]) {
        indent_length_stack.push_back(indent_length);
        lexer->result_symbol = _INDENT;
        return true;
      }
      if (indent_length < indent_length_stack.back() &&
          valid_symbols[_DEDENT]) {
        indent_length_stack.pop_back();
        lexer->result_symbol = _DEDENT;
        return true;
      }
    }

    return false;
  }

  vector<uint16_t> indent_length_stack;
};
} // namespace

extern "C" {

void *tree_sitter_pug_external_scanner_create() { return new Scanner(); }

bool tree_sitter_pug_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_pug_external_scanner_serialize(void *payload,
                                                    char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_pug_external_scanner_deserialize(void *payload,
                                                  const char *buffer,
                                                  unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_pug_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}
}
