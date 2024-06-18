#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description This program assigns a random number to the variable n and
 * prints the lastdigit of the number stored in the variable last_digit
 * followed by a specific message based on the value of the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is less than greater than 5", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0" n, last_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	return (0);
}
