#include <main.h>
/**
 * print_alphabet - prints the alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a = 'a';
	int i = 0;

	while (a >= 'z')
	{
		_putchar(a + i);
		i++;
	}
	_putchar("\n");

	return (0);
}
