#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This is the main function, which serves as the entry point
 * for the program. It returns an integer value to indicate the success or
 * failure of the program's execution.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
