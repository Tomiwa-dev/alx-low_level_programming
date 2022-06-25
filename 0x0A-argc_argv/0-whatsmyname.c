#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: program name
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
