#include <stdio.h>

/**
 * main - A program that prints all the numbers of base 16 in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char a;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar ('\n');

	return (0);
}

