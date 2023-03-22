#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char l;
	int t = 0;

	while (t <= 9)
	{
	for (l = 'a'; l <= 'z'; l++)
	{
	_putchar(l);
	}
	_putchar('\n');
	t++;
	}
}
