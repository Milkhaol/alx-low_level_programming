#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints lowercase and uppercase alphabets'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sm;
	int ca;

	for (sm = 'a'; sm <= 'z'; sm++)
	{
		putchar(sm);
	}
	for (ca = 'A'; ca <= 'Z'; ca++)
	{
		putchar(ca);
	}
	{
		putchar('\n');
	}
	return (0);
}
