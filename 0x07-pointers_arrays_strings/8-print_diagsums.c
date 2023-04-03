#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 * @a: input
 * @size: input
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 = sum1 + a[j + size + j];
	}
	for (j = size - 1; j >= 0; j--)
	{
		sum2 += a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
