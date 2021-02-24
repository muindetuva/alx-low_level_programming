/**
  * prime_checker - checks whether a number is a prime number
  * @i: number to check
  * @j: divisor
  *
  * Return: 1 if its a prime number otherwise zero
  */
int prime_checker(int i, int j)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if(i % j == 0)
		return (0);
	if (j * j > i)
		return (1);

	return 

