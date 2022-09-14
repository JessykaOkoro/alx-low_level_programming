#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 *
 * Return: return last digit
 *
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
