#include"main.h"

/**
 * printf_char - prints a char.
 * @val:argument.
 * Return:1.
 */

int prinf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
