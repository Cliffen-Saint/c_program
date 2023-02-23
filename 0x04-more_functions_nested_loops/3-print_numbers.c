#include "main.h"

/**
 * print_numbers - Print numbers 0 up to 9
 *
 * Return: The numbers 0 up to 9
 */

void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		_putchar(x);
		x++;
	}
	_putchar('/n');
}

