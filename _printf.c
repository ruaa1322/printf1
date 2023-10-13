#include "main.h"

/**
 * _printf - function to perform printf functions
 * @format: string containing format specifier and plain text
 * @...: represents variadic functionality
 * Return: length
 */

int _printf(const char *format, ...)
{
	int length = 0;
	va_list arguments;

	va_start(arguments, format);

	while (*format != '\0')
	{
		if (*format == "%")
		{
			format++;

			switch (*format)
			{
				case '%':
					length += put_char('%');
					break;
				case 'c':
				{
					length += put_char(va_arg(arguments, int));
					break;
				}
				case 's':
				{
					length += put_str(va_arg(arguments, char *));
					break;
				}
			}
		}
		else
			length += put_char(*format);
		format++;
	}
	va_end(arguments);
	return (length);
}
