#include "main.h"

/**
 * _printf - printf function
 * @format: character string
 * @...: shows function is variadic
 * Return: t_len
 */

int _printf(const char *format, ...)
{
	int t_len = 0; /*inintialize total length*/
	va_list value; /*declare argument list*/

	va_start(value, format); /*initialize the arguments with format*/
	while (*format != '\0') /*while we are still on a character*/
	{
		if (*format == '%') /*if current character is %*/
		{
			format++; /*move to next character*/
			switch (*format)
			{
				/*if character is %, increase length and print the variable*/
				case '%':
					t_len += put_char('%');
					break;
				case 'c':
					t_len += pntch(value);
					break;
				case 's':
				{
					t_len += pntstr(value);
					break;
				}
				default:
				t_len += put_char('%') + put_char(*format);
				break;
			}
		}
		else
			t_len += put_char(*format);
		format++;
	}
	va_end(value);
	return (t_len);
}
