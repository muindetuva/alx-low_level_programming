/**
  * *_memcpy - copies n bytes from a given memory area
  * @dest: where the bytes are to be copied to
  * @src: where the bytes are being copied from
  * @n: number of bytes to copy
  *
  * Return: pointer to the dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
