#include "main.h"

/**
 * pntuint - prints an unsigned int
 * @value: argument
 * Return: t_len
 */


int pntuint(va_list value)
{
	unsigned int n = va_arg(value, unsigned int);
	int i = 0, t_len = 0;
	char buf[12];

	if (n == 0)
	{
		t_len += put_char('0');
		return (t_len);
	}

	while (n > 0)
	{
		buf[i] = '0' + (n % 10);
		n = n / 10;
		i++;
	}

	for (i--; i >= 0; i--)
		t_len += put_char(buf[i]);

	return (t_len);
}
