#include <stdio.h>
#include <string.h>
/**
 * _strncpy - check the code
 *
 * @dest : char pointer
 * @src : char pointer
 * @n : int
 *
 * Return: length of s.
 */
char *_strncpy(char *dest, char *src, int n)
{
size_t i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
for ( ; i < n; i++)
{
dest[i] = '\0';
}
}
return (dest);
}
