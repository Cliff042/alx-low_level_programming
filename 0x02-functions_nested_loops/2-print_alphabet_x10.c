#include "main.h"

/**
 * Print print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * Return nothing.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		i++;
		_putchar('\n');
	}
}
