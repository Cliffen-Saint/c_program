#include "main.h"
/**
 * _isalpha - checks for alphabetic char
 *
 * @c: character to be checked
 *
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
