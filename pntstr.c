#include "main.h"
/**
 * pntstr - print a string.
 * @val: argument.
 * Return: the length of the string.
 */
int pntstr(va_list val)
{
	char *string;
	int i = 0;
	int t_len;

	string = va_arg(val, char *);

	if (string == NULL)
	{
		string = "(null)";
		t_len = str_len(string);

		while (i < t_len)
		{
			put_char(string[i]);
			i++;
		}
		return (t_len);
	}
	else
	{
		t_len = str_len(string);
		for (; i < t_len; i++)
			put_char(string[i]);
		return (t_len);
	}
}
