#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of element
 * @size: element in the array
 * @cmp: pointere to the function to be used to compare values
 *
 * Return: the index of the first element, else -1 if no element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
