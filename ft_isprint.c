int	ft_isprint(char c)
{
	if (c < 33 && c > 126)
		return (0);
	return(1);
}