#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - random number assigned to n
 * Return: 0 for proper execution else non zero 
 */
int main(void)
{
	int n;

	srand(time(0));
	n  = rand() - RAND_MAX /2;
	if (n >)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n <0)
		prinft("%d is negative\n",n);
	return (0);
}
