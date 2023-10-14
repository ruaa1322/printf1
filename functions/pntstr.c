#include "main.h"
/**
 * pntstr - print a string.
 * @val: argument.
 * Return: the length of the string.
 */
int pntstr(va_list value)
{
	char *string = va_arg(val, char *);
	return (put_str(string ? string : "(nil)"));
}
