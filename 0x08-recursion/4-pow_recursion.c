/**
  * _pow_recursion - returns the value of a number to a given power
  * @x: number to be raised
  * @y: power to raise the number to
  *
  * Return: -1 if the power is negative and the value of the power otherwise
  */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	if (y == 0)
		return (1);
	return (-1);
}
