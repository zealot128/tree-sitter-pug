# Tree-sitter-pug

This is a tree-sitter parser grammar for the [pug](https://github.com/pugjs/pug) language.

For now this is intended to be used **for a vue+pug** setup, as the control flow operations aren't recognized by the parser (since they are not used in conjunction with vue).

## Contributing

If you'd like to contribute the missing grammar, feel free to fork/PR:

currently missing:

- [ ] Control Flow (if, each, else, case, include...)
  https://pugjs.org/language/conditionals.html
  https://pugjs.org/language/includes.html
- [ ] inline Javascript code with "- "
- [ ] output Javascript code with "= "
  https://pugjs.org/language/code.html
- [ ] inline Javascript code with "#{...}"
- [ ] Filters


To add tests, check out `./test/corpus/*.txt`

How to run & test:

```
npm install -g tree-sitter-cli
tree-sitter generate && tree-sitter test
```

