#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int sm;

	for (sm = 'z'; sm >= 'a'; sm--)
	{
		putchar(sm);
	}
	{
		putchar('\n');
	}
	return (0);
}
