#include <stdio.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabets except e and q
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a <= 'd' || a >= 'f'  && a <= 'p' || a >= 'r')
		putchar(a);
	}
	{
		putchar('\n');
	}
		return (0);
}
