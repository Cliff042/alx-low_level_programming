#include <stdio.h>

/**
 * main - Prints the size of various data typesn.
 * Return: Always 0 on Success.
 **/

int main(void)
{

	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of a long int: %d byte(s)\n", sizeof(l));
	printf("size of a long long int: %d byte(s)\n", sizeof(ll));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	fprintf(stderr, "Anything");
	return (0);
}
