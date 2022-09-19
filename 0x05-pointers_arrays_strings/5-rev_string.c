#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 *
 * @s : char pointer
 *
 * Return: length of s.
 */
void rev_string(char *s)
{
int length, i, j = 0, k;

char endString[1000];

length = strlen(s);

for (i = length - 1; i >= 0; --i)
{
        endString[j] = s[i];
        ++j;
}

for (k = 0; k < length;k++)
{
    s[k] = endString[k];
}

}
