#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(((char*)s1)[i] == ((char*)s2)[i] && (((char*)s1)[i] != '\0') && i < n -1)
		i++;

	return (((char*)s1)[i] - ((char*)s2)[i]);
}
