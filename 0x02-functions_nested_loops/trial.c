#include <stdio.h>

/**
  * times_table - prints the 9 by 9 times table
  *
  * Return: void
  */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = 0; j < 10; j++)
		{
			if (k == 0)
			{
				putchar(k + '0');
			}
			else if(k > 0 && k < 10)
			{
				putchar(' ');
				putchar(k + '0');
			}	
			else if (k > 9)
			{
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
			}
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			k = k + i;
		}
		putchar('\n');
	}
	return 0;
}
