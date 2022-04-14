#include <stdio.h>
/**
 * main - causes and infinite loop
 * Return: returns 0
 */

int main(void)
{
	int j;

	printf("Infinite loop incoming: \n");

	j = 0;

	while (j < 10)
	{
		putchar(j);
	}
	
	printf("Infinite loop avoided! \\o/\n");

	return (0)
}
