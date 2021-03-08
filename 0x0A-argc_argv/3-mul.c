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
	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);

	return (0);
}
