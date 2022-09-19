#include <stdio.h>
/**
 * _strlen - check the code
 *
 * @s : char pointer
 *
 * Return: length of s.
 */
int _strlen(char *s)
{
int i;

for(i = 0; s[i] != '\0'; ++i);

return i;
}

