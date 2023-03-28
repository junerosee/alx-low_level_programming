#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: string
 * Return: Prints characters of string
 */
void puts2(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
		{
			_putchar(str[j]);
		}
		else
			continue;
	}
	_putchar('\n');
}
