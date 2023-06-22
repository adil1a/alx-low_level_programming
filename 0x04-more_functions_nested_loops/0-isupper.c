#include "main.h"

/**
 *  * _isupper -  checks for uppercase character.
 *   * @c: c -  Variable
 *    * Return: Always 0.
 *     */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
