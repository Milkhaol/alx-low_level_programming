#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints out all single digits of base 10'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a);
		a++;
	}
	{
		putchar('\n');
	}
	return (0);
}
