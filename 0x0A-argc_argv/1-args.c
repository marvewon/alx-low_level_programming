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
	int i;

	if (argc >  1)
	{
		for (i = 0; i < argc; i ++)
		{
			printf("argv[%d] = %s\n", i, argv[0]);
		}

	}
	return (0);
}
