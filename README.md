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

## Difference between `cat -n` and `linum`    
For single files there is not much of a difference other than the filename display.
But for multiple files the line number keeps on continuing:

    % cat -n foo.txt bar.txt baz.txt
         1	Lorem
         2	ipsum
         3	dolor
         4	sit
         5	amet
         1	consectetur
         2	adipisicing
         3	elit
         1	sed
         2	do
         3	eiusmod
         4	tempor
         5	incididunt

    % linum foo.txt bar.txt baz.txt
    	----------------- FILE: foo.txt --------------------

         1  Lorem
         2  ipsum
         3  dolor
         4  sit
         5  amet

    	----------------- FILE: bar.txt --------------------

         6  consectetur
         7  adipisicing
         8  elit

    	----------------- FILE: baz.txt --------------------

         9  sed
        10  do
        11  eiusmod
        12  tempor
        13  incididunt
