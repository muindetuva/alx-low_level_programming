/**
  * rev_string - reverses a string
  * @s: string to be reversed
  *
  * Return: void
  */

void rev_string(char *s)
{
	int j, len = 0, temp;

	while (s[len] != '\0')
		len++;

	len = len - 1;
	j = 0;
	while (j < len)
	{
		temp = s[j];
		s[j] = s[len];
		s[len] = temp;
		j++;
		len--;
	}
}

