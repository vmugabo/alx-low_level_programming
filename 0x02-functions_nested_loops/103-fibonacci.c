#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued fibonacci terms
 * followed by a new line
 * Return: Return 0 for success else return non zero
 */
int main(void)
{
	int i;
	unsigned int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		c = a + b;
		a = b;
		b = c;
	}

	printf("%u\n", sum);

	return (0);
}
