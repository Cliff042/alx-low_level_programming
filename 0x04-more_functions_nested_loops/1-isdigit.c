#include "main.h"

/**
 * _isdigit -  a function that checks for a digit (0 through 9).
 * @c: test character.
 * Return: 1 if a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <=10)
		return (1);
	else
		return (0);
}

