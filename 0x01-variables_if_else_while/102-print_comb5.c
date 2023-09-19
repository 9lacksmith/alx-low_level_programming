#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers in ascending order, separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens1, tens2, ones1, ones2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		for (ones1 = 0; ones1 <= 9; ones1++)
		{
			for (tens2 = tens1; tens2 <= 9; tens2++)
			{
				int start_ones = (tens1 == tens2) ? ones1 + 1 : 0;

				for (ones2 = start_ones; ones2 <= 9; ones2++)

				{
					putchar(tens1 + '0');
					putchar(ones1 + '0');
					putchar(' ');
					putchar(tens2 + '0');
					putchar(ones2 + '0');

					if (!(tens1 == 9 && ones1 == 9 && tens2 == 9 && ones2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

