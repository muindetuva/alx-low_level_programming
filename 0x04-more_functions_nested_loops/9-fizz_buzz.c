#include <stdio.h>

/**
  * main - prints from 1 to 100 replacing multiples of 3 and 5 with fizz and
  * buzz
  *
  *Return: 1 if succesfully run
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);

}
