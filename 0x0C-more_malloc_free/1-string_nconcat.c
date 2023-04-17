#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - Concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int i, j, k, l;

	i = j = k = l = 0;

	while (s1 && s1[k])
		k++;
	while (s2 && s2[l])
		l++;

	if (n < l)
	{
		s = malloc(sizeof(char) * (k + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (k + l + 1));
	}
	if (!s)
	{
		return (NULL);
	}
	while (i < k)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < l && i < (k + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= l && i < (k + l))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}

