#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n
 * each time it is executed
 * and determines if it is positive or negative.
 * return: Always 0 when successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Use of else if statement */
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
	}
	else
	{
	printf("%d is %s\n", n, "negative");
	}
	return (0);
}
