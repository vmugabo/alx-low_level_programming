#include <stdio.h>Z
#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: checked int
 * Return: value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
