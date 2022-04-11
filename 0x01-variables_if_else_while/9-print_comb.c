#include <stdio.h>

/**
 * main - Prints a series of numbers with commas
 *
 */
in main(void)
{
	in d;
	
	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
