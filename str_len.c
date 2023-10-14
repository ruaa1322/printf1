#include "main.h"
/**
* str_len - Returns the lenght of a string.
* @str: string pointer
* return:i
*/
int str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		return(i);
	return (i);
}

/**
* str_len_c - Strlen function but applied for constant char pointer str
* @str: char pointer
* Return: i
*/
int str_len_c(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		return(i);

	return (i);
}
