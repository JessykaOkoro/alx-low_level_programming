#include <main.h>

/**
 * _putchar - prints nane
 *
 * Return: Always 0
 *
 */
int _putchar(char c)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
