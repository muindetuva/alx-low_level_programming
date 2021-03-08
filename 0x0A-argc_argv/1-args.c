#include <stdio.h>

/**
  * main - prints the number of arguments passed to it
  * @argc: the number of arguments passed to the function
  * @argv: an aray of the commanf line arguments passed to the functionn
  *
  * Return: 0 if succesfule
  */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
