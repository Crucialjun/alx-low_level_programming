#include <stdio.h>
#include <string.h>
/**
 *_strpbrk - check the code
 *
 * @s : char
 *
 * @accept : char
 *
 * Return:pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
