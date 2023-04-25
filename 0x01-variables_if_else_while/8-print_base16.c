#include <stdio.h>
/**
 * main - prints hexadecimal digits
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
