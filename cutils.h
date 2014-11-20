#ifndef _cutils_h_
#define _cutils_h_

#include <stdio.h>

void die(char *s);
int flushstream(FILE *stream);
char * jsURLparser(int argc, char **argv);
void print(char *s);
char * tokenizer(char *cpy, char *tok, int which, const char *delim);
int filesize(FILE *fp);
#endif
