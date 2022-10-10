#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: ponter
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: ponter to newly allocated memory, or NULL if failure
 */
viod *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_zie == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
			max = old_size;
	for (i = 0; i < max; i ++)
		p[i] = oldpp[i];
	free(ptr);
	return (p);
}
		
