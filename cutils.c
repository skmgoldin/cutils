#include <stdio.h>
#include <stdlib.h>

void die(char *s) {
  fprintf(stderr, "%s\n", s);
  exit(1);
}

int flushstream(FILE *stream) {
  int x;
  while((x = fgetc(stream)) != '\n') {;};
  return x;
}
