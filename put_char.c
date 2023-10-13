#include "main.h"

/**
 * put_char - funtion that prints a character
 * @c: character
 * Return: the character
 */

int put_char(char c)
{
	return (write(1, &c, 1));
}
