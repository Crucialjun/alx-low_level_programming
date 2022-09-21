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
if (dest == NULL)
{
return (NULL);
}
char *ptr = dest;
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
