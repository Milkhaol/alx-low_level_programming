#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints out a statement followed by a new line
 *
 * Return: 1 if successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}

