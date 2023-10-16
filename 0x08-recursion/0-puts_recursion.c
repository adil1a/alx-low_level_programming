#include "main.h"

/**
 * puts_recursion - prints a string, followed by /n
 */

void _puts_recursio(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursio(s + 1);
}
