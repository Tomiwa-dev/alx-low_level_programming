#include "main.c"

/**
 * print_sign - print_sign block
 * Description : does
 * @n : character
 * Returns: 1 or 0
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

