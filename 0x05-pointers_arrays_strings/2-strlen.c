/**
  * _strlen - returns the length of a string
  * @s: the string to be measured
  *
  * Return: the lenght of the string
  */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
