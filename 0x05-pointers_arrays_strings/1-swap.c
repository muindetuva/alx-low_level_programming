/**
  * swap_int - Swaps the values of two variables passed to it.
  * @a: first variable to be swapped
  * @b: second variable to be swapped
  *
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
