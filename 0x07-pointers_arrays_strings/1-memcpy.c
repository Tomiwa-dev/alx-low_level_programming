#include "main.h"
/**
 * _memcpy - a function that copys memory area
 * @dest: destination
 * @src: source
 * @n: no of bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (s);
}
