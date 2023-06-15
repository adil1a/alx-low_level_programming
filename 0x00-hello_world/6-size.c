#include <stdio.h>

/**
 * main - prints the size ov various types
 * on the computer it is compiled and run on.
 *
 * Return: 0
 */
int mai(void)
{
	char c;
	int i;
	long li;
	long long int lli;
	float f;
	
	printf("Size of a char:%ld byte(s)\n", sizeof(c));
	printf("Size of a int:%ld byte(s)\n", sizeof(i));
	printf("Size of a long:%ld byte(s)", sizeof(li));
	printf("Size of a long long int:%ld byte(s)\n", sizeof(lli));
	printf("Size of a float:%ld byte(s)\n", sizeof(f));
	return (0);
}
