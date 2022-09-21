#include <stdio.h>
#include <string.h>
/**
 * _strcat - check the code
 *
 * @dest : char pointer
 * @src : char pointer
 *
 * Return: length of s.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int k = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[k] != '\0')
{
dest[i] = src[k];
i++;
k++;
}
dest[i] = '\0';
return (dest);
}
