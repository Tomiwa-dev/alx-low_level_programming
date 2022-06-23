#include "main.h"
/**
 * wildcmp - a function that cmpares two strings
 * @s1: string
 * @s2: string
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		s1++;
		s2++;
		return (wildcmp(s1, s2));
	if (*s2 == '*' && (wildcmp(s1, s2++) || wildcmp(s++, s2)))
		return (1);
	if (*s2 == '*' && *(s1++) && *s2)
		return (0);
	return (0);
}
