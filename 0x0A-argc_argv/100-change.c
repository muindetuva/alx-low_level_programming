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
	int given_coins = 0, rem_change = 0, i;
	int denoms[] = {25, 10, 5, 1};
	int change_amount;

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
		for (i = 0; i < 4; i++)
		{
			int possible_coins = change_amount / denoms[i];
			given_coins  += possible_coins;
	
			rem_change = atoi(argv[1]) % denoms[i];
			change_amount = rem_change;
		}
	}

	printf("%d\n", given_coins);
	return (0);
}
