void	*ft_memset(char *ptr, int x, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ptr[i] = x;
		i++;
	}
	return (ptr);
}
