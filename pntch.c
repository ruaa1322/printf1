#include "main.h"

/**
 * pntch - prints a char.
 * @value: argument
 * Return: argument
 */

int pntch(va_list value)
{
	char c = va_arg(value, int);

	return (put_char(c));
}
