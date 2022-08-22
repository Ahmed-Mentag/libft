#include "libft.h"

static int	is_s(const char c, const char *set)
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
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_s(s1[start],set))
		start++;
	while (s1[end] && is_s(s1[end] , set))
		end--;
	r = ft_substr(s1, start, start + end);
	return (r);
}
