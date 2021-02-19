/**
  * reverse_array - reverses the content of an array of integers
  * @a: an array of integers
  * @n: number of elements
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[n - 1];
		a[n] = a[i];
		a[i] = temp;
	}
}
