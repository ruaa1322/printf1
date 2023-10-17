#include "main.h"
/**
 * pntptr - function that prints pointer
 * @value: argument
 * Return: t_len
 */

int pntptr(va_list value)
{
	void *ptr = va_arg(value, void *);
	int t_len = 0;
	/* Assuming you want to print the pointer in hexadecimal format*/
	/*You can customize this as needed*/
	char buf[20]; /*Buffer for storing the hexadecimal representation*/

	if (ptr == NULL)
	{
		/* Handle NULL pointer*/
		t_len += put_str("(nil)"); /* Or your custom handling for NULL pointers */
	}
	else
	{
		t_len += put_str("0x");
		/* Custom function to convert the pointer to a hexadecimal string */
		t_len += ptrhex(buf, ptr);
		t_len += put_str(buf);
	}

	return (t_len);
}

/**
 * ptrhex - converts the pointer to hex sring
 * @buf: buffer
 * @ptr: pointer
 * Return: t_len
 */
int ptrhex(char *buf, void *ptr)
{
	int t_len = 0;
	/**
	 * Custom implementation to convert the pointer to hexadecimal format
	 * You can use bitwise operations or other techniques to achieve this
	 * and store the result in 'buf'
	 * Example (you may need to adapt this based on your platform)
	 */
	unsigned long ptr_val = (unsigned long)ptr;
	int shift;
		for (shift = (sizeof(void *) * 8) - 4; shift >= 0; shift -= 4)
		{
			int digit = (ptr_val >> shift) & 0xF;
			char hex_char = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
			*buf = hex_char;
			buf++;
			t_len++;
		}
	*buf = '\0'; /* Null-terminate the string */
	return (t_len);
}
