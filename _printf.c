#include "main.h"

/**
 * _printf - printf function
 * @format: character string
 * @...: shows function is variadic
 * Return: t_len
 */

int _printf(const char *format, ...)
{
	int specs, t_len = 0; /*inintialize total length*/
	size_t i;
	va_list value; /*declare argument list*/
	fmt specifiers[] = {
		{'%', pnt37}, {'c', pntch}, {'s', pntstr},
		{'d', pntint}, {'i', pntint}, {'b', pntb},
		{'u', pntuint}, {'o', pntoct}, {'x', pnthex}, {'X', pntHEX},
		{'p', pntptr}
	};

	if (format == NULL)
		return (-1);
	va_start(value, format); /*initialize the arguments with format*/

	while (*format != '\0') /*while we are still on a character*/
	{
		if (*format == '%') /*if current character is %*/
		{
			format++; /*move to next character*/
			if (*format == '\0')
				break;
			i = 0, specs = 0;
			while (i < sizeof(specifiers) / sizeof(specifiers[0]))
			{
				if (*format == specifiers[i].c)
				{
					t_len += specifiers[i].f(value);
					specs = 1;
					break;
				}
				i++;
			}
			if (specs == 0)
				t_len += put_char('%') + put_char(*format);
		}
		else
			t_len += put_char(*format);
		format++;
	}
	va_end(value);
	return (t_len);
}
