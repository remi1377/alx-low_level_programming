#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * return: always 0 (Success)
 */
int main(void)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; i <= 9; i++)
		{
		printf("%d, %d",i ,j);
		}
	}
	return (0);
}	
