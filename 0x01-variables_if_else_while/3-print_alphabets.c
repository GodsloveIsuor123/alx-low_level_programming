#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase,
 * and then in uppercase, follwed by a new line
 * Retun: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		putchar(c);
		c++;
	}

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}