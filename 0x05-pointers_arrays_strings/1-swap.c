#include "main.h"

/**
 * swap_int - swaping 2 integer using a pointer
 * @a: is a pointer int type
 * @b: is a pointer int type
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
