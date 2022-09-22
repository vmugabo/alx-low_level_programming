#include <stdio.h>
#include "main.h"

/**
 * string_toupper - function changes all lowercase letters of a string to uppercase.
 * @a: Point to array
 *
 * Return: UPPER characters.
 */
char *string_toupper(char *a)
{
	int i, j;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i ; j++)
	{
		if (a[j] > 96 && a[j] < 123)
		{
			a[j] = a[j] - 32;
		}
		else
		{
			a[j] = a[j];
		}
	}
	return (a);
}
