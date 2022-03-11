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

	printf("size of a char is: %d byte(s)\n.", sizeof(c));
	printf("size of an int is: %d byte(s)\n.", sizeof(i));
	printf("size of a long int is: %d byte(s)\n.", sizeof(l));
	printf("size of a long long int is: %d byte(s)\n.", sizeof(ll));
	printf("size of a float is: %d byte(s).", sizeof(f));
	return (0);
}
