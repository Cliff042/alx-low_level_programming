#include "main.h"

/**
 * main - print alphabet from a-z.
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
