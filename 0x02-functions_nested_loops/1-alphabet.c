#include "main.h"
/**
 * print_alphabet - prints the alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a;
	int i;

	for (i = 97; i <= 122; i++)
	{
		a = i;
		_putchar("%c", a);
	}
	_putchar("\n");

}
