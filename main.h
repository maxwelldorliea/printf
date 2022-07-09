#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(int ch);

int pr_char(va_list args);

int pr_str(va_list args, int *);

#endif
