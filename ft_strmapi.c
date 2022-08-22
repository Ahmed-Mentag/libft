#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*r;

	i = 0;
	len = ft_strlen((char*)s);
	r = malloc(len + 1);	
	while (i < len)
	{
		r[i] = f(i, ((char*)s)[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}

