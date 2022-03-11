#include <stdio.h>

/**
 * main - Prints lowercase the uppercase alphabet.
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
