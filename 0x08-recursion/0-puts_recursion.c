#include <stdio.h>
#include <string.h>
/**
 *_puts_recursion - check the code
 *
 * @s : char
 *
 * Return:.pointer
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
