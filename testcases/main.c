#include "../main.h"

int main(void)
{
	int a = 10, *b = NULL;
	char c = 'h', *n = NULL;
	char s[] = "hello";
	char *ns = NULL;

	_printf("%d, %i, %c, %c, %s, %s\n", a, b, c, n, s, ns);
	_printf("%b\n", 98);
}
