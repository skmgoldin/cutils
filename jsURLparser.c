#include <stdio.h>

int collapsestring(char *string, int x);

char * jsURLparser(int argc, char **argv) {

  if(argc > 2) {
    die("Only submit one URL, please.");
  }

  char *url = *(argv + 1);

  char b;
  int x;
  for(x = 0; (b = *(url + x)) != '\0'; x++) {
    if(b == '\\') {
      collapsestring(url, x);
    }
  }

  printf("%s\n", url);

  return url;
}

int collapsestring(char *string, int x) {

  for(; *(string + x) != '\0'; x++) {
    *(string + x) = *(string + (x + 1));
  }

  return 0;
}
