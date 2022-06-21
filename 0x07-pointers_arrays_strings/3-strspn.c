#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: character to locate
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *c = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = c;
		if (flag == 0)
			break;
	}
	return (count);
}
