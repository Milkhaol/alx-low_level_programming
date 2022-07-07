#include "main.h"

/**
 * main - prints alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha = 97;

	while (alpha < 123)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
