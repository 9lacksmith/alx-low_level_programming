#include "main.h"

/**
 * times_table - Prints the multiplication table for numbers 0 to 9
 *
 * This function prints the multiplication table for numbers 0 to 9 in the
 * following format:
 * "n x m = result", where 'n' and 'm' are the multiplicands, and 'result' is
 * the product.
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}

			if (product < 10)
				_putchar(' ');

			if (product >= 10)
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

