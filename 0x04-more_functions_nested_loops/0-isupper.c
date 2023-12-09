#include "main.h"
#include <stdio.h>

/**
 * _isupper - chech for uppercase character.
 * @c: the value of char
 *
 * Return: 1 if upper 0 to otherwise
*/
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
