#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return ft_calloc(1 , sizeof(char));
	if (ft_strlen(s) <= start + len)
		substr = malloc(ft_strlen(s) - start + 1);
	else
		substr = malloc(len + 1);
	if (!substr)
		return (0);
	while (s[start] && i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
