# linum
Print line numbers with continuations for multiple files. This is like `cat -n` but it works with multiple files and line numbers continue.

## Install
Get the code and build:

    git clone https://github.com/auvi/linum
    cd linum
    make

If you have a `~/bin` folder you can install:

    make install

## Usage
Single file:

    linum foo.c
Multiple files:   

    linum foo.c bar.c baz.c
