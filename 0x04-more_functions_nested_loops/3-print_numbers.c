#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9 to standard output
 *
 * Return: void
 */
void print_numbers()
{
	char c;

	for (c = '0'; c < '10'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
