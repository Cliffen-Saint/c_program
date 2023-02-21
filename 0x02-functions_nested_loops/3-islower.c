#include <stdio.h>
#include "main.h"
/**
 * _islower - check if a character is lowercase
 *
 * @c: character to be checked
 *
 * Return: Always 0 or 1 (Success)
 *
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
