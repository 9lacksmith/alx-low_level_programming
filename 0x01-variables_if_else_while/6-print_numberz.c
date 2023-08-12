#include <stdio.h>

/**
 * main - prints all single digit number of base 10 starting from 0
 *	- followed by new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	num = 48;
	while (num < 58)
	{
		putchar (num);
		num++;
	}
	putchar ('\n');
	return (0);
}
