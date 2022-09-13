#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers any point n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int m, v;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			if (m != 98)
				printf("%d, ", m);
			else if (m == 98)
				printf("%d\n", m);
		}
	} else if (n >= 98)
	{
		for (v = n; v >= 98; v--)
		{
			if (v != 98)
				printf("%d, ", v);
			else if (v == 98)
				printf("%d\n", v);
		}
	}
}
