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

char * tokenizer(char *str, int which, const char *delim) {
  char *tok = malloc(sizeof(char) * 10000); 
  tok = strtok(str, delim);

  if(which == 1) {
    return tok;
  }

  int i;
  for(i = 1; i < which; i++) {
    tok = strtok(NULL, delim);
  }

  return tok;
}

char * strimmut(char *str) {
  char *cpstr = malloc(sizeof(char) * strlen(str) + 1);
  return strcpy(cpstr, str);
}
