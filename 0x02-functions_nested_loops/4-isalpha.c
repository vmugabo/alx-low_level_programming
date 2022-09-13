#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c - Check character C
 * Return: return 1 if c is a letter,else return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
