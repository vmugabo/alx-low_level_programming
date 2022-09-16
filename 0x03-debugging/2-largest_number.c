#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: int 1
* @b: int 2
* @c: int 3
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int l;

	if (a >= b && a >= c)
		{
		largest = a;
		}
	else if (b >= a && b >= c)
		{
		l = b;
		}
	else
		{
		l = c;
		}

	return (l);
}
