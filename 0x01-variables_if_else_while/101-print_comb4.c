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
	int d, q, p;

	for (d = '0'; d < '9'; d++)
	{
		for (q = p + 1; q <= '9'; q++)
		{
			for (p = d + 1; p <= '9'; p++)
			{
				if ((p != d) != q)
				{
			putchar(d);
			putchar(p);
			putchar(q);
			if (d == '7' && p == '8')
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
