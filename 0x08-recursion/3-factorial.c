#include <stdio.h>
#include <string.h>
/**
 * factorial  - check the code
 *
 * @n : integer
 *
 * Return:int
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
{
return (n * factorial(n - 1));
}
