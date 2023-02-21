#include <stdio.h>
#include "main.h"
/**
 * _islower - check if a character is lowercase
 *
 * followed by a new line
 *
 * Return: Always 0 (Success)
 *
 **/
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
