#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct fmt - struct of functions and format specifiers
 * @c: format specifiers
 * @f: fuctions
 */
typedef struct fmt
{
	char *c;
	int (*f)();
}func_list;

int _printf(const char *format, ...);
int put_char(char c);
int put_str(char *string);
int pnt37(void);
int pntch(va_list vl);
int pntstr(va_list vl);
int str_len(char *str);
int str_len_c(const char *str);

#endif
