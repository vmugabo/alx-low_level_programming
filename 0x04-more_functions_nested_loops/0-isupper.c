#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase,else return  0
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}