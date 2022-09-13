#include <stdio.h>
#include "main.h"

/**
 * Main - print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Return: Return 0 for success else return non zero
*/
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
