#include "main.h"
/**
 * _puts - prints a string
 *@str: string
 *
 * Return: void.
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		printf("%c", *(str + i));
		i++;
	}
	printf("\n");
}
