#include <stdio.h>
/**
 * main - Prints alphabet in both lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
