void	memcpy(void *dst, void *src, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		dst[i] = src[i];
		i++;
	}
}

