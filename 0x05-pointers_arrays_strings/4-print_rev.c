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
int length, temp, i;

length = strlen(s);

for (i = length; i > length; --i)
{
printf("%s\n", s[i]);
}
return (0);
}

