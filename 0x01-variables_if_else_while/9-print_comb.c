#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * separated by , followed by a space.
(*
 * Return: 0 if successful.
 */

int main(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
