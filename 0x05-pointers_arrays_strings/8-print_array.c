#include "main.h"

/**
 * print_array - Prints n elements of array of ntergers
 * @a: the array of intergers
 * @n: the number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
	printf("%d", a[l]);
	if (l != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
