#include <stdio.h>

/**
 * main - call all function
 *
 * Return: Always 0
 */
int main (int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i ++)
		{
			printf("argc[%d] = %s\n", i, argv[i]);
		}
	}
	return (0);
}
