#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line
 * But for multiples of three print 'Fizz' instead of the number and
 * for the multiple of five print 'Buzz'.
 * For numbers which are multiples of both three and five print 'FizzBuzz'.
 */
int fizz_buzz(void)
{
	int i;

	for(i = 0; i <= 100; i++)
	{
		if(i % 3 == 0)
			printf("Fizz");
		if(i % 5 == 0)
			printf("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("number=%d", i);
		printf("\n");
	}

	return (0);
}
			

