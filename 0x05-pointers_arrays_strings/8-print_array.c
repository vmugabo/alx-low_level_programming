#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n times the elements of an array
 * @a: pointer
 * @n: print n times
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
