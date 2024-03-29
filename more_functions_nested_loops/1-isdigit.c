#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: the character to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}
