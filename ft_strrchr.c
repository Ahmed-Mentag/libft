char	*ft_strrchr(const char *str, int c)
{
	int	i_of_last;
	int	i;

	i_of_last = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i_of_last = i;
		i++;
	}
	if (i_of_last !=  -1)
		return (char*)(str + i_of_last);
	return (0);
}
