#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((q != d) != p)
				{
			putchar(d);
			putchar(q);
			putchar(p);
			
			if (d == '7' && q == '8')
				continue;
			putchar(',');
			putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}