#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - assigns random number to int n everytime
 *it executes and prints that number
 * Return: returns 0
 */
int main(void)
{
	int n;
		
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
