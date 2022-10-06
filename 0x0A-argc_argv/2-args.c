#include "main.h"

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed to the function
 * @argv: argumet vector of pointers to strings
 *
 * Return: always 0
 */
int main(argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
