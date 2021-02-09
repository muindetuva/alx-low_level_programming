#include "holberton.h"

/**
  * jack_bauer - prints all the minutes ub a day
  *
  * Return: void
  */
void jack_bauer(void)
{
	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
		{
			for(j = 0; j <= 3; j++)
			{
				for (k = 0; k <= 5; k++)
                                {
                                        for (l = 0; l <= 9; l++)
                                        {
                                                _putchar('0' + i);
                                                _putchar('0' + j);
                                                _putchar(':');
                                                _putchar('0' + k);
                                                _putchar('0' + l);
						_putchar('\n');
                                        }
				}
			}
		}
		else
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + l);
						_putchar('\n');

					}

				}
			}
		}
	}
}
