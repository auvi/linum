#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

static void print_lines(FILE* fp) {
  static size_t linum;
  char ch;
  bool newline = true;

  while(EOF != (ch = fgetc(fp))) {
    if(newline) {
      printf("%6zu  ", ++linum);
      newline = false;
    }
    if('\n' == ch) {
      newline = true;
    }
    fputc(ch, stdout);
  }
}

int main(int argc, char* argv[]) {
  if(argc == 1) {
    print_lines(stdin);
  } else {
    for(size_t i = 1; i < argc; i++) {
      FILE *fp = fopen(argv[i], "r");
      if(!fp) {
        fprintf(stderr, "%s\n", "ERROR: file not found!");
        // exit(-1);
      } else {
        printf("\t----------------- FILE: %s --------------------\n\n", argv[i]);
        print_lines(fp);
        printf("\n");
      }
    }
  }
}
