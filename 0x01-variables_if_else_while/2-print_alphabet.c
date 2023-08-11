#include <stdio.h>

/**
 * main - prints the alphabet followed by a new line
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
