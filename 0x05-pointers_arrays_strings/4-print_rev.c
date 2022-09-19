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
int length, temp;

length = strlen(s)

for(int i = 0;i < len/2;i++)
{
temp = s[i];
s[i] = s[length - i -1];
s[length - i -1] = temp;
}

