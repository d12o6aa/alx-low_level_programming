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
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
