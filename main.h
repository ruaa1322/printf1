#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


int put_char(char c);
int put_str(char *string);
int pnt37(void);
int pntch(va_list value);
int pntstr(va_list value);
int pntint(va_list value);
int _printf(const char *format, ...);
int str_len(char *str);
int str_len_c(const char *str);

#endif
