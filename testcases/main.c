#include "../main.h"
#include <stdio.h>

int main(void)
{
	int a = 10, *b = NULL;
	char c = 'h', *n = NULL;
	char s[] = "hello";
	char *ns = NULL;

	_printf("%%\n");
	printf("%%\n");
	_printf("%d, %i, %c, %c, %s, %s\n", a, b, c, n, s, ns);
	printf("%d, %i, %c, %c, %s, %S\n", a, b, c, n, s, ns);
	_printf("%d, %i, %d, %i, %d\n", -20, 0, NULL, -100, 50);
	printf("%i, %d, %i, %d, %i\n", -20, 0, NULL, 50, -100);
	_printf("%b\n", 98);
	_printf("%u, %u, %u, %u\n", 100000, 0, -10000, 42);
	_printf("%o, %o, %o, %o\n", 100000, 0, -10000, 42);
	_printf("%x, %x, %x, %x\n", 100000, 0, -10000, 42);
	_printf("%X, %X, %X, %X\n", 100000, 0, -10000, 42);
        _printf("%p, %p, %p\n", NULL, 0x1234, 0xdeadbeef);
	printf("%p, %p, %p\n", NULL, 0x1234, 0xdeadbeef);

	return (0);
}
