#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Takes the value of n and if n is
 *	- greater than 0 prints "is positive"
 *	- The number is 0 prints "is zero"
 *	- the number is less than 0 prints "is negative'
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
