#include "main.h"

/**
 * _abs - a fxn that computes the absolute value of an integer
 * @ab: integer input
 * Return: absolute val of ab
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
