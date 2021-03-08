#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the number of arguments passed to it
  * @argc: the number of arguments passed to the function
  * @argv: an aray of the commanf line arguments passed to the functionn
  *
  * Return: 0 if succesfule
  */

int main(int argc, char *argv[])
{
	int given_coins = 0, i;
	int denoms[] = {25, 10, 5, 2, 1};
	long int change_amount, rem_change;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	change_amount = atoi(argv[1]);
	if (change_amount < 0)
	{
		printf("0\n");
		return (0);
	}
	if (argc == 2)
	{
		for (i = 0; i < 5; i++)
		{
			int possible_coins = change_amount / denoms[i];

			given_coins  += possible_coins;
			rem_change = change_amount % denoms[i];
			change_amount = rem_change;
		}
	}

	printf("%d\n", given_coins);
	return (0);
}
