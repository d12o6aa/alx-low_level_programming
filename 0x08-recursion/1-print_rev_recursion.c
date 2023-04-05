#include "main.h"

/**
 * 1-print_rev_recursion.c -o 1-print_rev_recursion
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}

