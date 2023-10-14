#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int prinf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);


int put_char(char c);
int put_str(char *string);
int _printf(const char *format, ...);
int printf_int(va_list args);
int printf_dec(va_list args);

#endif
