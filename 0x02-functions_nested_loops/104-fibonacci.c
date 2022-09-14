#include <stdio.h>

/**
 * main - finds and prints the fir 98 fibonacci terms
 * followed by a new line
 * Return: Return 0 for success else return non zero
 */
int main(void)
{
	int i;
	unsigned long int a, b, c;

	a = 1;
	b = 2;

	for (i = 1; i <= 98; ++i)
	{
		if (a < 135301852344706746049)
		{
			c = b + a;
		}
		a = b;
		b = c;
	}

	printf("%lu\n", a,b,c);

	return (0);
}
