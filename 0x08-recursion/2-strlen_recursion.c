#include "main.h"

/**
 * 2-strlen_recursion
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
    {
        return;
    }
    return 1 + _strlen_recursion(s + 1);
}
