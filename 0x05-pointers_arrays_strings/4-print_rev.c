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
int length, temp, i;

length = strlen(s);

for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
