#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to check
 *
 * Return: 1 if c is a letter, otherwise returns 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
