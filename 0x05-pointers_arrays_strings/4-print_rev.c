#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: character for string
 * Return: void
 */
void print_rev(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
	y++;
	}

	for (y -= 1; y >= 0; y--)
	{
	_putchar(s[y]);
	}
	_putchar('\n');
}
