#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: return 0 if success else return non zero
 */
int main(void)
{
        int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)

	putchar(ch);

	putchar('\n');

	return (0);
}
