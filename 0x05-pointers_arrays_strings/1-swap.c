#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int c;

	int c = *a;
	*a = *b;
	*b = c;
}
