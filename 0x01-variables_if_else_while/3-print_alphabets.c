#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then uppercase , new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphL;
	char alphU;

	alphL = 'a';
	alphU = 'A';

	while (alphL <= 'z')
	{
		putchar(alphL);
		alphL++;
	}
	while (alphU <= 'Z')
	{
		putchar(alphU);
		alphU++;
	}
	putchar('\n');
	return (0);
}
