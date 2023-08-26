#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int rows;

	for (rows = 1; rows < 11; rows++)
	{
		char alph;

		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		putchar('\n');
	}
}
