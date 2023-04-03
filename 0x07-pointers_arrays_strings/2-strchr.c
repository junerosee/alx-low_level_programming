#include "main.h"

/**
 * _strchr - locates a character in the string
 * @c: character
 * @s: string
 * Return: Always 0(success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
