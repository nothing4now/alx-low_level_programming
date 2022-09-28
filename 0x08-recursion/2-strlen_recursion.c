#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int l = 0;
	while (s[l] != '\0')
		l++;
	return l;
}
