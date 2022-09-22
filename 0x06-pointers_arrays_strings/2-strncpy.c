#include <stdio.h>
#include "main.h"

/**
* _strncat - Concatenates two strings
* @dest: destination string to
* @src: sorce string from
* @n:No. of strings
*
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
