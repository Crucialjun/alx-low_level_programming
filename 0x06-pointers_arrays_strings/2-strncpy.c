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
unsigned int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
