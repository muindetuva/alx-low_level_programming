/**
  * factorial - returns factorial of a given number
  * @n: number to find factorial of
  *
  * Return: -1 if n is less than zero and the factorial otherwise
  */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	if (n == 0)
		return (1);
	return (-1);
}
