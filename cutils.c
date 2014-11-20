#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void die(char *s) {
  fprintf(stderr, "%s\n", s);
  exit(1);
}

int flushstream(FILE *stream) {
  int x;
  while((x = fgetc(stream)) != '\n');
  return x;
}

void print(char *s) {
  printf("%s\n", s);
}

char * tokenizer(char *cpy, char *tok, int which, const char *delim) {
  strcpy(tok, strtok(cpy, delim));

  if(which == 1) {
    return tok;
  }

  int i;
  for(i = 1; i < which; i++) {
    strcpy(tok, strtok(NULL, delim));
  }

  return tok;
}

long filesize(FILE *fp) {
  long size;

  fseek(fp, 0L, SEEK_END);
  size = ftell(fp);
  fseek(fp, 0l, SEEK_SET);

  return size;
  
}
