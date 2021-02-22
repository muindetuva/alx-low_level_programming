/**
  * *_strchr - locates a character in a string
  * @s: The string to be checked
  * @c: The character to be looked for
  *
  * Return: pointer to first occurrence of letter and NULL if not found
  */

char *_strchr(char *s, char c)
{
	int i;
	char *z;

	z = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			z = &s[i];
			break;
		}
	}
	return (z);
}
