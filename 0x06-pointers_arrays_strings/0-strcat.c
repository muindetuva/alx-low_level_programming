/**
  * _strcat - appends 2 strings
  * @dest: where to append
  * @src: what to append
  *
  * Return: resulting string
  */

char *_strcat(char *dest, char *src)
{
	int len = 0, start, track = 0;

	/*Find end of destination string*/
	while (dest[len] != '\0')
		len++;

	start = len++;
	while (src[track] != '\0')
	{
		dest[start] = src[track];
		start++;
		track++;
	}
	dest[start] = '\0';
	return (dest);
}

