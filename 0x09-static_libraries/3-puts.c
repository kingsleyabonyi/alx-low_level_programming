#include "main.h"
/**
 * puts - Write a function that prints a string
 * _puts - Write a function that prints a string
 * @str: an input string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
