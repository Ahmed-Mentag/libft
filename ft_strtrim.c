#include "libft.h"

int	is_set(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	int	l;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_set(s1[start]))
		start++;
	while (s1[end] && is_set(s1[end]))
		end--;
	r = ft_substr(s1, start, start + end);
	return (r);
}
