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
<<<<<<< HEAD
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
int print_s(va_list ap, params_t *params);
{
int pnt37(void);
=======
int pnt37(va_list value);
>>>>>>> 4de55152303a1e203dfcb5ec10437214b58d5020
int pntch(va_list value);
int pntstr(va_list value);
int pntint(va_list value);
int pntb(va_list value);
int pntuint(va_list value);
int pntoct(va_list value);
int pnthex(va_list value);
int pntHEX(va_list value);
int _printf(const char *format, ...);
int str_len(char *str);
int str_len_c(const char *str);

#endif
