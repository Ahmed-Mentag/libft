#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char*)dest = *(char*)src;
		dest++;
		src++;
		i++;
	}
	return (dest - i);
	
}
