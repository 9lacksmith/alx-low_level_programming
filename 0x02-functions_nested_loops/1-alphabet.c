#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 *
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');

}
