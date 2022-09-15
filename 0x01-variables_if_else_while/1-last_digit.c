#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n < 0)
{
lastDigit = -(n % 10);
}
else
{
lastDigit = n % 10;
}



if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);

}
/* returns 0 */
return (0);
}
