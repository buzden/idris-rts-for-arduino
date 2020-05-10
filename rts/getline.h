#ifndef GETLINE_H
#define GETLINE_H
#include <stdlib.h>
#include <stdio.h>

typedef long ssize_t; // True for AVR

ssize_t getdelim(char **buf, size_t *bufsiz, int delimiter, FILE *fp);
ssize_t getline(char **buf, size_t *bufsiz, FILE *fp);
#endif // GETLINE_H
