#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: argument passed to the prograam
 * @argv: argument vector
 *
 * Return: always
 */
int main(int argc, char *argv[])
{
	int c;

	(void)argv;

	for (c = 0; c <= argc; c++)
	{
		printf("%d\n", c - 2);
	}
	return (0);
}
