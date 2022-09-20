#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 *
 * @str : char pointer
 *
 * Return: length of s.
 */
void puts2(char *str)
{
int length, i;

length = strlen(str);
for (i = 0; i <= length; i = i + 2)
{
putchar(str[i]);
}
}
