#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int put_char(char c);
int put_str(char *string);
/*<<<<<<< HEAD*/
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

/* Functions to print numbers */
int print_int(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);
=======
int pnt37(void);
int pntch(va_list value);
int pntstr(va_list value);
int str_len(char *str);
int str_len_c(const char *str);
/*>>>>>>> 84473613dbaa84a5e512141168b04b8a927be8c0*/

#endif
