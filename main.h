#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _puts(char *str);

int _putc(char c);

int _strlen(char *str);

int _putint(int n);

int _pcheck(va_list args, char c);

#endif
