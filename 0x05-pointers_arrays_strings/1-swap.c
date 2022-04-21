#include "main.h"
/**
 * swap_int - swap variable values
 * @a: pointer 1
 * @b:pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;
	int aux;

	temp = *a;
	aux = *a;
	*a = b;
	*b = temp;
	*b = aux;
}
