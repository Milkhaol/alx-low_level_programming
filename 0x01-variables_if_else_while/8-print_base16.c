#include <stdio.h>

/**
 * main - Entry point
 * Description: prints numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	char ch;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
