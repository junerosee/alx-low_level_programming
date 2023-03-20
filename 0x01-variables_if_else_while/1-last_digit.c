#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints last digit of number stored in variable
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
