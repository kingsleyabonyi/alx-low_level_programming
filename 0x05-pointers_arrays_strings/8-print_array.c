#include "main"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array an array of integers
 * @a: an input array
 * @n: an input integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i =
	
	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
