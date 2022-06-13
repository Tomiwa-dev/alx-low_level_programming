#include "main.h"
/**
 * _puts - prints a string folled by a newline
 * @str: string
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
