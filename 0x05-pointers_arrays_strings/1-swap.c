#include <stdio.h>
/**
 * swap_int - check the code
 *
 * @a : int pointer
 * @b : int pointer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;

*a = *b;
*b = temp;
}

