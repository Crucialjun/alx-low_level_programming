#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 *
 * @s : char pointer
 *
 * Return: length of s.
 */
void print_rev(char *s)
{
int length, i;

length = strlen(s);

for (i = length - 1; i >= 0; --i)
{
putchar(s[i]);
}
printf("\n");
}

