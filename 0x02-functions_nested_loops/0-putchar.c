#include <stdio.h>
/**
 * Main - print _putchar, followed by a new line.
(*
 *Return: 0
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for(i = 0; i <= 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
