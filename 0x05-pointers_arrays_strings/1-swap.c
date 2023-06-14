#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values
 *@a: pointer
 *@b: pointer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
