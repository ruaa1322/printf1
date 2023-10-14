#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 20;
	int len2 = 10;
	char ch = 'a';
	char str[] = " I am a string ";
	unsigned int ui;
	void *addr;

_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");
//ui = (unsigned int)INT_MAX + 1024;
//addr = (void *)0x7ffe637541f0;
//_printf("Length:[%d, %i]\n", len, len);
//printf("Length:[%d, %i]\n", len2, len2);
//_printf("Negative:[%d]\n", -762534);
//printf("Negative:[%d]\n", -762534);
//_printf("Unsigned:[%u]\n", ui);
//printf("Unsigned:[%u]\n", ui);
//_printf("Unsigned octal:[%o]\n", ui);
//printf("Unsigned octal:[%o]\n", ui);
//_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
//printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Character:[%c]\n", ch);
printf("Character:[%c]\n", ch);
_printf("String:[%s]\n", str);
printf("String:[%s]\n", str);
//_printf("Address:[%p]\n", addr);
//printf("Address:[%p]\n", addr);
//len = _printf("Percent:[%%]\n");
//len2 = printf("Percent:[%%]\n");
//_printf("Len:[%d]\n", len);
//printf("Len:[%d]\n", len2);
//_printf("Unknown:[%r]\n");
//printf("Unknown:[%r]\n");
return (0);
}
