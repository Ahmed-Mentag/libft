#include "libft.h"

int	cal_nb_words(char *s, char c)
{
	int	n;
	int	b;

	b = 1;
	n = 0;
	while (*s)
	{
		if (*s == c)
			b = 1;
		else
		{
			if (b == 1)
				n++;
			b = 0;
		}
		s++;
	}
	return (n);
}

char **ft_split(char const *s, char c)
{
	char	**result;
	int	nb_words;
	char	*to_be_splited;
	int	i;
	size_t	len;
	int	start;

	len = 0;
	i = 0;
	to_be_splited = ft_strtrim(s, ""+c);
	nb_words = cal_nb_words(to_be_splited, c);
	result = malloc((nb_words + 1) * sizeof(char*));
	if (!result)
		return (0);
	while (i < nb_words)
	{
		start = len;
		len = 0;
		while (s[len + start] && s[len + start] != c)
			len++;
		result[i] = ft_substr(s, start, len);
		i++;
	}
	result[i] = 0;
	return (result);
}
