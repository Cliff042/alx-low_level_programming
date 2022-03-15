#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: test character.
 * Return: 1 if uppercase, 0 if otherwise.
 */

int _isalpha(int c)
{
	if(( c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z'))
		return (1);

	else
		return (0);
}
