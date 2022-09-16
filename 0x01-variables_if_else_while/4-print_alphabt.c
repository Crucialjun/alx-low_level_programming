#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
printf("\n");
/* returns 0 */
return (0);
}
