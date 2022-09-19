#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 *
 * @str : char pointer
 *
 * Return: length of s.
 */
void puts_half(char *str)
{
int length, i, n;

length = strlen(str);

if (length % 2 != 0)
{
n = (length - 1) / 2;
}
else
{
n = length / 2;
}
for (i = n; i < length ; ++i)
{
putchar(str[i]);
}
printf("\n")
}
