#include <stdio.h>
/**
 * main - main block
 * Description: Prints 10 times the alphabet
 * in lower case
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
