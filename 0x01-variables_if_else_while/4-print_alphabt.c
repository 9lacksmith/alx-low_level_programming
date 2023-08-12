#include <stdio.h>

/**
 * main - prints the alphabet in lowercase folowed by new line
 *	- should not include q and e
 *
 * Return: Always 0(Success)
 *
 */

int main(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		if ((alph != 'e') && (alph != 'q'))
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
