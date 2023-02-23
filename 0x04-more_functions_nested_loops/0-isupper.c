#include "main.h"

/**
 * _isupper - checks for uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 (Success)
 **/

int _isupper(int c)
{
	c = 1;
	if (c >= 65 or c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
