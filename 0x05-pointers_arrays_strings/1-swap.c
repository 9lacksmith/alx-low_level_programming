#include <stdio.h>

/**
 * swap_int - swaps the values of 2 integers 
 *@a: A pointer to an int that will be updated 
 *@b: B pointer to an int that will be updated
 * Return: void that means our answer is correct
 */

 void swap_int(int *a, int *b)
 {
	 int f ;

	 f = *a;
	 *a = *b;
	 *b = f;
 }
