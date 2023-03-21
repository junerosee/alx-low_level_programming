#include <stdio.h>
/**
 * main - Prints alphabet except q and e
 * Return: Always 0
 */
int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != e && c != q)
		putchar(c);
	}
	putchar('\n');
	return (0);
}
