#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("Size of int: %i byte(s)\n", sizeof(int));
	printf("Size of long int: %i byte(s)\n", sizeof(long int));
	printf("Size of long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
