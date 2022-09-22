#include <stdio.h>
#include <string.h>
/**
 * reverse_array - check the code
 *
 * @a : int pointer
 * @n : int
 *
 * Return: length of s.
 */
void reverse_array(int *a, int n)
{
int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
