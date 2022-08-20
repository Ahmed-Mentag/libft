void *ft_memchr(const void *str, int c, int n)
{
	int	i;

	i = 0;
	while (i < n && *(char*)str != '\0')
	{
		if (*(char*)str == c)
			return (void*)str;
		str++;
		i++;
	}
	return (0);
}
