#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
(*
 *Return: 0 if successful.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
