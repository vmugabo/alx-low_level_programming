#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: return 1 if c is a digit, else return 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
