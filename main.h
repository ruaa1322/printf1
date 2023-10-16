#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


#define BUF_SIZE 1024
/**
 * struct fmt - stucture to hold functions and specifiers
 * @c: specifier
 * @f: function
 */
typedef struct
{
	char c;
	int (*f)(va_list value);
} fmt;

int put_char(char c);
int put_str(char *string);
int _printf(const char *format, ...);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);

int pnt37(va_list value);
int pntch(va_list value);
int pntint(va_list value);
int pntb(va_list value);
int pntuint(va_list value);
int pntoct(va_list value);
int pnthex(va_list value);
int pntHEX(va_list value);
int _printf(const char *format, ...);
int str_len(char *str);
int str_len_c(const char *str);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
#endif
