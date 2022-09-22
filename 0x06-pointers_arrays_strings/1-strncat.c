#include <stdio.h>
#include "main.h"

/**
* *_strncat - Concatenates two strings
* @dest: destination string to
* @src: sorce string from
* @n:No. of strings
*
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
