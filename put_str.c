#include "main.h"

/**
 * put_str - print string without a new line
 * @string: string
 * Return: length
 */

int put_str(char *string)
{
	int length = 0;

	while (*string)
	{
		length = length + put_char(*string);
		string++;
	}
	return (length);
}
