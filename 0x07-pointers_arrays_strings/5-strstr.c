#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *s = needle, *c = haystack;

	while (*haystack)
	{
		c = haystack;
		needle = s;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = c + 1;
	}
	return (NULL);
}
