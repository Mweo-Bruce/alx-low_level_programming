#include "main.h"

/**
 * swap - swap two int
 * @a: int to swap
 * @b: int to swap
 * @m: temp variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
