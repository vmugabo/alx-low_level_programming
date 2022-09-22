#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to reverse
 * @n: number of int in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, y;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		y = a[i];
		a[i] = a[j];
		a[j--] = y;
	}
}
