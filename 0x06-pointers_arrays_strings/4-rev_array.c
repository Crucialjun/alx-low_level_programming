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
for (int low = 0, high = n - 1; low < high; low++, high--)
{
int temp = a[low];
a[low] = a[high];
a[high] = temp;
}
}
