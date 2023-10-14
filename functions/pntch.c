#include "main.h"

/**
 * pntch - prints a char.
 * @val:argument.
 * Return:1.
 */

int pntch(va_list value)
{
	return (va_arg(value, int));
}
