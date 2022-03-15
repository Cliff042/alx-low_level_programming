#include <limits.h>
#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @r: interger.
 * Return: the value of the last digit.
 */

int print_last_digit(int r)
{
        if (r < 0)
                r = r * -1;
        _putchar((r % 10) + '0');
        return (r % 10);
}
