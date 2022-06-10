#include "main.h"

/**
 * print_sign - print_sign block
 * Description : does
 * @n : character
 * Return: 0
 */

int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}
	else (n < 0)
	{
		sign = -1;
		_putchar('-');
	}
	return (sign);

}

