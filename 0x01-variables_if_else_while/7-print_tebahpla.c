#include <stdio.h>
/**
 * main - prints alphabet in reverse
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0 ; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
