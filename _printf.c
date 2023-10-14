#include "main.h"

/**
 * _printf - function to perform printf functions
 * @format: string containing format specifier and plain text
 * @...: represents variadic functionality
 * Return: length
 */

int _printf(const char *format, ...)
{
	int t_len = 0; /* initialize the length variable */
	va_list arguments; /* declare variable for arguments */

	va_start(arguments, format); /* initialize arguments with format */

	while (*format != '\0')
	{
		/* check if current character is the start of a format specifier */
		if (*format == '%')
		{
			format++; /* move to next character */

			switch (*format)
			{
				case 'c': /* if %c, print a character from arguments */
				{
					t_len += put_char(va_arg(arguments, int));
					break;
				}
				case 's': /* if %s, print a string from arguments */
				{
					t_len += put_str(va_arg(arguments, char *));
					break;
				}
				default: /* if %%, print % */
					t_len += put_char('%');
					t_len += put_char(*format);
			}
		}
		/* if current character is not %, print it and move on */
		else
			t_len += put_char(*format);
		format++;
	}
	/* free arguments */
	va_end(arguments);
	/* return total length of formatted string */
	return (t_len);
}
