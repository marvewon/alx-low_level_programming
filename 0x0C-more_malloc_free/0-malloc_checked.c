#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: ponter to allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		ext(98);
	return (0);
}
