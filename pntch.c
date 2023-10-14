#include "main.h"

/**
 * pntch - prints a char.
 * @value: argument
 * Return: argument
 */

int pntch(va_list value)
{
	return (put_char(va_arg(value, int)));
}
