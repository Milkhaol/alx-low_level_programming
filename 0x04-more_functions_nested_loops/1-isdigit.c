#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digits 0-9
 * @c: digits checker
 *
 * Return: 1, otherwise 0
 */
int _isdigit(int c)
{
	int c;

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
