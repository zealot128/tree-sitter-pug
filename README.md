# Tree-sitter-pug

This is a tree-sitter parser grammar for the [pug](https://github.com/pugjs/pug) language.

This is intended to be used along side Angular, but my aim is to eventually support all pug features.

## Current state

Everything currently included is relatively bug-free, but I'm not happy with the structure of some of the rules, so the structure will change before I'm finished.

There is an incomplete list of todos in `grammar.js`, but the summary is: all the basics are supported; only some of the complex syntaxes shouldn't be used alongside Angular are missing.
I have tests for every scenario supported, so you can just have a look through `./test/corpus/*.txt`.

## Developing

How to run & test:

```
npm install -g tree-sitter-cli
tree-sitter generate && tree-sitter test
```

