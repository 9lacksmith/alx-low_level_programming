#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *	- followed by a new line
 * Return: Always 0(Success)
 */

int main(void)
{
	char alphrev;

	alphrev = 'z';

	while (alphrev >= 'a')
	{
		putchar(alphrev);
		alphrev--;
	}
	putchar ('\n');
	return (0);
}
