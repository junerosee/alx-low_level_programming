#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as a parameter
 * @str: string to be duplicated
 * Return: a pointer to the copied string on success,
 * null on error
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, j;

	i = j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		dup[j] = str[j];

	return (dup);
}
