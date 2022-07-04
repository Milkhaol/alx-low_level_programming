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
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e'  && a != 'q')
		{
			putchar(a);
		}
		{
			putchar('\n');
		}
		return (0);
	}
}
