#include "main.h"
#include <stdio.h>
/**
 * _strchr -  function that locate a char in a string
 * @s: string
 * @c: character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
