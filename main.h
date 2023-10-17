#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
#define S_LONG 2
#define S_SHORT 1

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
int _putchar(char c);
int put_char(char c);
int put_str(char *string);
int pnt37(va_list value);
int pntch(va_list value);
int pntstr(va_list value);
int pntint(va_list value);
int pntb(va_list value);
int pntuint(va_list value);
int pntoct(va_list value);
int pnthex(va_list value);
int pntHEX(va_list value);
int pntptr(va_list value);
int _printf(const char *format, ...);
int str_len(char *str);
int str_len_c(const char *str);
int print_exc_string(va_list val);
int print_HEX_extra(unsigned int num);
int get_flags(const char *format, int *i);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int ptrhex(char *buf, void *ptr);
#endif
