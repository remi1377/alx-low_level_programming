#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	print("size of char: %d byte \n", sizeof(char));
	print("size of int: %d byte \n", sizeof(int));
	print("size of long int: %d \n", sizeof(long int));
	print("size of a long long int: %d", sizeof(long long int));
	print("size of float: %d", sizeof(float));
}
