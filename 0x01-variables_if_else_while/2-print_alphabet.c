#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char alph;
	fot (alph = 'a'; alph <= 'z', alph++)
	{
		putchar(alph);
	}
	putchar("\n");
	return (0);
}
