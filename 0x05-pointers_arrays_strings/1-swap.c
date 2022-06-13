#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: variable to pass into function
 * @b: variable to pass into the function
 * Return: 0
 */
void swap_int(int *a, int *b);
{
	int ac;
	int bc;

	ac = *a;
	bc = *b;
	*a = bc;
	*b = ac;
}
