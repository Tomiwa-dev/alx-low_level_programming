#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints all letters in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
