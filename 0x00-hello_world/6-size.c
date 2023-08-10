#include <stdio.h>

/**
 * main - Prints the various sizes of char, int , long and float
 * Return: Always returns 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of a char: %zu bytes\n", sizeof(float));
	return (0);
}
