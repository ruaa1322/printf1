#include "main.h"

/**
 * pntb - convert unsigned int to binary
 * @value: argument
 * Return: t_len
 */

int pntb(va_list value)
{
	unsigned int n = va_arg(value, unsigned int); /*retrieve arguemnt*/
	char bin[32]; /*binary representation*/
	int t_len = 0; /*total length*/
	int i = 0; /*index*/

	if (n == 0)
	{
		/* if the character = 0, print 0 */
		t_len += put_char('0');
		return (t_len);
	}

	while (n > 0)
	{
		/*as long as the number at i > 0, print th3 number modulo 2*/
		bin[i] = n % 2;
		n = n / 2;
		i++;
	}

	/* reverse order */ 
	for (i--; i >= 0; i--)
	{
		t_len += put_char(bin[i] + '0');
	}

	return (t_len);
}
