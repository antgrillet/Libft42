int	ft_strlen(char c)
{
	int a;

	a = 0;
	while (c[a] != "\0")
	{
		a =+ 1;
	}
	return (a);
}