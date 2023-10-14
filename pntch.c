#include "main.h"

/**
 * pntch - prints a char.
 * @val:argument.
 * Return:1.
 */

int pntch(va_list val)
{
	char charac;

	charac = va_arg(val, int);
	put_char(charac);
	return (1);
}
