#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - "Determines if a number is positive, negative or zero."
 *
 * Return: Always 0
 */

int main(void)
{
	/*Declare variables here*/
	int n, m;

	/*Write statements here*/
	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar(n % 10 + '0');
			putchar(m % 10 + '0');
			if (n == 8 && m == 9)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
