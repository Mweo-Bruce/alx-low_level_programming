#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return - Always 0 (Success)
 *
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}	
	putchar('\n');			
	return (0);
}
