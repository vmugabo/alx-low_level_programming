#include <stdio.h>
#include "main.h"

int bandersnatch(char *s1, char *s2);
char *move(char *s2);

/**
 * wildcmp - compares two strings recursively,
 * checking for wildcards expansion
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if the strings can be considered identical
 * otherwise 0
 */

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);


int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
