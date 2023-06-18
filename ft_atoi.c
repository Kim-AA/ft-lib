#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

int	ft_atoi(const char *ptr)
{
	size_t	i;
	int		sign;
	int		res;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(ptr[i]))
		++i;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			sign = -1;
		++i;
	}
	while ('0' <= ptr[i] && ptr[i] <= '9')
	{
		res = res * 10 + (ptr[i] - '0');
		++i;
	}
	return (sign * res);
}
