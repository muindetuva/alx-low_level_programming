#include <stdio.h>
/**
  * main - prints the name of the program
  * @argc: the number of arguments passed
  * @argv: array of pointers to the string of arguments passed to the command
  *
  * Return: 0 if succesful
  */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
