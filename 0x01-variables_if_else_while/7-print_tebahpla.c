#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * followed by a new line
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int n;

	for (n = 25; n >= 0; n--)
	{
		putchar(n + 'a');
	}
	putchar('\n');
	return (0);
}
