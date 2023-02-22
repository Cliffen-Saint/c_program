#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints sign of a number
 *
 * @n: integer to be checked
 *
 * Return: Always 0 (if n is 0) or 1 (if n > 0)
 *
 * or -1 (if n < 0)
 *
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
