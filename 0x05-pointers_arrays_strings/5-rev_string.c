#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 *
 * @s : char pointer
 *
 * Return: length of s.
 */
void rev_string(char *s)
{
int length, i;

length = strlen(s);

for (i = length - 1; i >= 0; --i)
{
putchar(s[i]);
}
printf("\n");
}

