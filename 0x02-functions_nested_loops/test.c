#include <stdio.h>

/**
  * jack_bauer - prints all the minutes ub a day
  *
  * Return: void
  */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
		{
			for(j = 0; j <= 3; j++)
			{
			}
		
		else
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(':');
						putchar('0' + k);
						putchar('0' + l);
						putchar('\n');
					}

				}
			}
		}
	}
	return (0);
}
