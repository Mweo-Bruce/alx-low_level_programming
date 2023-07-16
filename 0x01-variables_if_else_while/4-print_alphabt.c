#include <stdlib.h>
#include <stdio.h>
/*
 * main - Prints the alphabet except q and e
 *
 * Return - Always 0 (Success)
 *
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] == 'a' || alphabet[i] == 'q')
			continue;
		else
			putchar(alphabet[i]);
	}
	
	putchar("\n");
				
	return (0);
}
