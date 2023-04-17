#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills the allocated memory with a constant byte
 * @s: the memory area to be filled
 * @b: the char to be copied
 * @n: the number of times b is copied
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @num: the number of elements in an array
 * @size: the size of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int num, unsigned int size)
{
	char *p;

	if (num == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * num);

	if (p == NULL)
	{
		return (NULL);
	}

	_memset(p, 0, num * size);
	return (p);
}
