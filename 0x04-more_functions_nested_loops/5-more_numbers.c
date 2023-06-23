#include "main.h"

/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 * Return: 10 times of the numbers since 0 up to 14
 */
void more_numbers(void)
{
	int i;
	int x = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		while (x < 15)
		{
			if (x > 9)
				_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			x++;
		}
		x = 0;
		_putchar('\n');
	}
}
