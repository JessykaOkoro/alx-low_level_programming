#include "main.h"

/**
 * main -print alphabets
 *
 * Description: A function that prints alphabets
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
