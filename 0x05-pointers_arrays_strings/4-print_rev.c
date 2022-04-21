#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @ an input string 
 * Return: void
 */
void print_rev(char *s)
{
	int k = 0;

	while (s[k])
		k++;
	while (k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}

