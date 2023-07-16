#include <stdio.h>

/**
 * main - Print all possible different combinations of two-digit numebrs
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	for (i = 0; i < 100; n++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
