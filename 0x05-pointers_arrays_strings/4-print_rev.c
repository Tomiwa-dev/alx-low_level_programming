#include "main.h"
/**
* print_rev - prints string in reverse
* @s: string
* Return: 0
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}

