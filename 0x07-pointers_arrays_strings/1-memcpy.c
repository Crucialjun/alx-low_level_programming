#include <stdio.h>
#include <string.h>
/**
 *_memset - check the code
 *
 * @s : char
 *
 * @n : bytes
 *
 * @b : constant
 * Return:.pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
