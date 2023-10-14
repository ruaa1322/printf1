#include "main.h"

/**
 * _printf - printf function
 * @format: character string
 * @...: shows function is variadic
 * Return: t_len
 */

int _printf(const char *format, ...)
{
	int t_len = 0;
	va_list value;
	char *c;
	c = format;
	va_start(value, format);

	while (*c != '\0')
	{
		if (*c == '%')
		{
			c++;
			switch (*c)
			{
				case '%':
				{
					t_len += put_char('%');
					break;
				}
				case 'c':
				{
					t_len += put_char(va_arg(value, int));
					break;
				}
				case 's':
				{
					char *string = va_arg(value, char *);
					(string == NULL) ? t_len += put_str("(nil)") : t_len += put_str(string);
					break;
				}
				default:
				t_len += put_char('%');
				t_len += put_char(*c);
				break;
			}
			else
				t_len += put_char(*c);
			c++;
		}
		c++;
	}
	va_end(value);
	return (t_len);
}
