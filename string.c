#include "studio.h"

int main(void)
{
	char input_string[] = "helo, \x0Aworld!\x07";
	int i;

	printf("original string: %s\n", input_string);
	printf("sormatted string: ");

	for (i = 0; input_string[i] != '\0'; i++)
	{
		if ((input_string[i] < 32) || (input_string[i] >= 127))
		{
			printf("\\X%02X", (unsigned char)input_string[i]);
			}
		else
		{
			print("%c", input_string[i]);
		}
	}
	printf("\n");

	return 0;
}
