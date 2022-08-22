#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	l1;
	size_t	l2;
	size_t	i;

	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	r = malloc(l1 + l2 + 1);
	if (!r)
		return (0);
	while (*s1)
	{
		r[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		r[i] = *s2;
		s2++;
		i++;
	}
	r[i] = '\0';
	return (r);
}
