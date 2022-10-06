#include <stdlib.h>
/**
 * malloc_checked - check code
 * @b:  int
 *
 * Return: int
 */
void *malloc_checked(unsigned int b)
{
    void *p;
    p = malloc(b);
    if (p == NULL)
        exit(98);
    return (p);
}