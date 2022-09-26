#include <stdio.h>
#include <string.h>
/**
 *print_chessboard - check the code
 *
 * @a : char
 *
 *
 * Return:null
 */
void print_chessboard(char (*a)[8])
{
int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				putchar(a[i][j]);
				putchar('\n');
			}
			else
				putchar(a[i][j]);
		}
	}
}
