#include "function_pointers.h"

/**
 * int_index - returns index place if comparison is true,if
 * not -1
 * @array: the array
 * @size: the size of elements in array
 * @cmp: the pointer to func of one of those in main
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
