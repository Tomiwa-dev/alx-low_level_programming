#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: character
 * @s2: character
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *start1, *start2;
	int i = 0, len = 0, len2 = 0;

	start1 = s1;
	start2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len++;
		s1++;
	}
	s1 = start1;

	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = start2;

	new_str = malloc(sizeof(char) * (len + len2 + 1));
	start2 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (len + len2); i++)
	{
		if (i < len)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (start1);
}
