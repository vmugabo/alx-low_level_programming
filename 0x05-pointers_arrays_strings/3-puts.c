#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @str: the string
 *
 * Return: the length of a string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
