#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of char: %d byte \n", sizeof(char));
	printf("size of int: %d byte \n", sizeof(int));
	printf("size of long int: %d \n", sizeof(long int));
	printf("size of a long long int: %d", sizeof(long long int));
	printf("size of float: %d", sizeof(float));
}
