#include <stdio.h>
#include <string.h>
/**
 *_memcpy - check the code
 *
 * @dest : char
 *
 * @src : bytes
 *
 * @n : constant
 * Return:.pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
