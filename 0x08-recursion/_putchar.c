#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * character to print : c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
