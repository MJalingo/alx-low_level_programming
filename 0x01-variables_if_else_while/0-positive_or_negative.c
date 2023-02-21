#include <stdio.h>
#include <stdlid.h>
#include <time.h>
/**
* main - Entry point
*
* Description: Positive anything is better than negative nothing
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int o = 0;

	srand(time(NULL));  /** use current time as seed for random generator*/
	n = rand() - RAND_MAX / 2;

	if (n > o)
	{
		printf("%d", n, "is positive\n");
	}
	else if (n < o)
	{
		printf("%d", n, "is negetive\n");
	}
	else if (n == o)
	{
		printf("%d", n, "is zero\n");
	}

	return (o);
}
