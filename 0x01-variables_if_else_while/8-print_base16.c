#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the digits of the hex number system using putchar
*
* Return: 0 when code executes succesfully
*/

int main(void)
{
	int nums, alphas, i;

	for (nums = 48, i = 0; i < 10; nums++, i++)
	{
		putchar(nums);
	}
	for (alphas = 97, i = 0; i < 6; alphas++, i++)
		putchar(alphas);
	putchar('\n');
	return (0);
}
