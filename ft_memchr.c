#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (len && *ptr != c)
	{
		++ptr;
		--len;
	}
	if (len)
		return ((void *)ptr);
	else
		return (NULL);
}
