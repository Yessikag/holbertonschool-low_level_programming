#include "main.h"
/*
 */void print_alphabet_x10(void)
{
	char m, a;

	for (m = 0; m <= 9; m++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar (a);
		}
		_putchar('\n');
	}
}
