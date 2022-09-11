#include <stdio.h>

/**
 * main - prints the alphabet in lowercase but q and e,
 * followed by a new line
 * Return: return 0 if success else return non zero
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
