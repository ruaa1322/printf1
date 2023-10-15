#include "main.h"

/**
 * pntint - function that prints an integer
 * @value: argument
 * Return: t_len
 */

int pntint(va_list value)
{
	int n = va_arg(value, int); /* retrieve the integer from value */
	int t_len = 0; /*initialize total length*/
	int dg; /*used to get last value of n*/
	char dg_char; /*used to conver int to char*/

	if (n < 0) /*if integer is negative*/
	{
		/*increase length and add -*/
		t_len += put_char('-');
		/*make the number positive*/
		n = -n;
	}

	while (n > 0) /*while the n > 0*/
	{
		dg = n % 10;
		dg_char = '0' + dg;
		put_char(dg_char);
		n /= 10;
		t_len++;
	}
	return (t_len);
}
