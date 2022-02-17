#include "main.h"
/*
 */void print_alphabet_x10(void)
{
	int x, p;
	for (p = 0; p < 10; p++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_puthcar('\n');
	}
}
