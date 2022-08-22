#include "libft.h"

static	int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	else
	{
		if (n < 0)
		{
			n *= -1;
			len++;
		}
		while (n > 0)
		{
			len++;
			n /= 10;
		}
	}
	return (len);
}


char	*ft_itoa(int n)
{
	int	len;
	char	*r;
	int	i;

	len = ft_nbrlen(n);
	r = malloc(len + 1);
	i = len;
	r[i] = '\0';
	i--;
	if (n == 0)
		r[0] = '0';
	else
	{
		if (n < 0)
		{
			r[0] = '-';
			n *= -1;
		}
		while (n > 0)
		{
			r[i--] = n % 10 + '0';
			n /= 10;
		}
	}
	return (r);
}
