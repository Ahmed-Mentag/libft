#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	l;
	char	*r;
	size_t	i;

	i = 0;
	l = ft_strlen(s);
	r = (char*)ft_calloc(l + 1, sizeof(char));
	if (!r)
		return (0);
	while (i < l)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
