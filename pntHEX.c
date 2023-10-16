#include "main.h"

/**
 * pntHEX - prints lowercase hexadecimals for the unsigned int
 * @value: argument
 * Return: t_len
 */

int pntHEX(va_list value)
{
	unsigned int n = va_arg(value, unsigned int);
	int i = 0, t_len = 0;
	char buf[12], hex[] = "0123456789ABCDEF";

	if (n == 0)
	{
		t_len += put_char('0');
		return (t_len);
	}

	while (n > 0)
	{
		buf[i] = hex[n % 16];
		n /= 16;
		i++;
	}

	for  (i--; i >= 0; i--)
	{
		t_len += put_char(buf[i]);
	}

	return (t_len);
}
