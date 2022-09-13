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
	int n, m, a, b;

	/*Write statements here*/
	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (a = 48; a <= 57; a++)
			{
				for (b = 48; b <= 57; b++)
				{
				if (((a + b) > (n + m) && a >= n) || n < a)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(a);
					putchar(b);
					if (n + m + a + b == 227 && n == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
