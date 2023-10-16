#include "main.h"
/**
 * pntstr - print a string.
 * @value: argument.
 * Return: the length of the string.
 */
int pntstr(va_list value)
{
	char *string = va_arg(value, char *);

	return (put_str(string ? string : "(null)"));
}
