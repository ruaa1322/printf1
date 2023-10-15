#include "../main.h"

int main(void)
{
	int a = 10, *b = NULL;
	char c = 'h', *n = NULL;
	char s[] = "hello";
	char *ns = NULL;

	_printf("%%\n");
	_printf("%d, %i, %c, %c, %s, %s\n", a, b, c, n, s, ns);
	_printf("%d, %i, %d, %i\n", -20, 0, -100, 50);
	_printf("%b\n", 98);
	_printf("%u, %u, %u, %u\n", 100000, 0, -10000, 42);
	_printf("%o, %o, %o, %o\n", 100000, 0, -10000, 42);
	_printf("%x, %x, %x, %x\n", 100000, 0, -10000, 42);
	_printf("%X, %X, %X, %X\n", 100000, 0, -10000, 42); 

	return (0);
}
