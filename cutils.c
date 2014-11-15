

#include <stdio.h>

void die(char *s) {
  perror(s);
}

int flushstream(FILE *stream) {
  int x;
  while((x = fgetc(stream)) != '\n') {;};
  return x;
}
