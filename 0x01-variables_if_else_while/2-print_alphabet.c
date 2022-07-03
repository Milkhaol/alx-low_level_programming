#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints out alphabets in lower case'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		putchar(a);
	}
	{
		putchar('\n');
	}
	return (0);
}
