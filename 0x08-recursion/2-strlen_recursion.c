/**
  * _strlen_recursion - returns the length of a string
  * @s: string to check length
  *
  * Return: the lenght of the string
  */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	return (1 + _strlen_recursion(s + 1));
}
