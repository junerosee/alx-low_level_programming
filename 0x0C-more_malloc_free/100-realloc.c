#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: a pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *old;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}

	p = malloc(new_size);
	if (!p)
	{
		return (NULL);
	}

	old = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			p[i] = old[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = old[i];
		}
	}

	free(ptr);
	return (p);
}
