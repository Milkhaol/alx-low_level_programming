#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: 'prints value and checks if last digit of numbers is
 * greater than 5, equal 0, or less than 6
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;
	char info[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", info, n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%s %d is %d and is 0\n", info, n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", info, n, last_digit);
	}
	return (0);
}
