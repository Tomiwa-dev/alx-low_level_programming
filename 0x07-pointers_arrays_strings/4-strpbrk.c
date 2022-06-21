#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: string
 * @accept: character
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *c = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = c;
		s++;
	}
	return (NULL);
}
