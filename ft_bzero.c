#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	size_t 	l;

	l = (size_t)ft_strlen((char*)s);
	i = 0;
	while (i < n && i < l)
	{
		*(char*)s = 0;
		s++;
		i++;
	}
}
