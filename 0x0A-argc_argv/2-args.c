#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 * Return: all arguments it recieves
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
