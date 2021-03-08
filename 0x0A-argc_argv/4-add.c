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
	int ans = 0, num = 0, i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		ans += num;
	}
	printf("%d\n", ans);
	return (0);
}
