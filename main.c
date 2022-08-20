#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	const char s1[] = "Hello";
	char *s2;
	size_t l = 4;
	s2 = ft_substr(s1, 0, l);
	printf("%s\n", s2);
	return (0);
}
