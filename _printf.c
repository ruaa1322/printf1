#include "main.h"

/**
 * _printf - printf function
 * @format: character string
 * @...: shows function is variadic
 * Return: t_len
 */

int _printf(const char *format, ...)
{
	func_list funcs[] = {
		{"%%", pnt37},
		{"%s", pntstr},
		{"%c", pntch},
	};

	int t_len = 0, i = 0, j;
	va_list value;

	va_start(value, format);
Here:
	while (format[i] != '\0')
	{
		j = 13;

		while (j >= 0)
		{
			if (funcs[j].c[0] == format[i] && funcs[j].c[1] == format[i + 1])
			{
				t_len += funcs[j].f(value);
				i = i + 2;

				goto Here;
			}
			j--;
		}
		put_char(format[i]);
		t_len++;
		i++;
	}
	va_end(value);
	return (t_len);
}
