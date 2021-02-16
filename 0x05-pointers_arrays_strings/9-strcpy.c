/**
  * _strcpy - copy a string
  * @dest: where to copy to
  * @src: string to be copied
  *
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;
	len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	return (dest);
}
