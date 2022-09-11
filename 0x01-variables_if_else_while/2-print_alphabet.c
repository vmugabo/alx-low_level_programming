#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: return 0 if success else return non zero
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
