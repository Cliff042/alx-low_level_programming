#include <stdio.h>

/**
 * main - Prints lowercase alphabet letters, except q and e.
(*
 * Return: 0 if successful.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
