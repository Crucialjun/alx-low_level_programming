#include <stdio.h>
#include <string.h>
/**
 * _strncat - check the code
 *
 * @dest : char pointer
 * @src : char pointer
 * @n : int
 *
 * Return: length of s.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest + strlen(dest);
while (*src != '\0' && n--)
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
