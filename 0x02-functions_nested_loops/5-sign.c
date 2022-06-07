#include "main.c"
/**
 * print_sign - prints the sign of a number
 * Returns 1 or 0
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

