#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabets except e and q
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
