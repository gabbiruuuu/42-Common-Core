
#include "libft.h"

// fill memory with a constant byte
void	*ft_memset(void *s, int c, size_t len)
{
	char	*p;

	p = (char *)s;
	len--;
	while (len > 0)
	{
		p[len] = c;
		len--;
	}
	return (s);
}

/*
void *memset(void *s, int c, size_t n).
The memset function fills the first n bytes of the memory area
pointed to by s with the constant byte c.
The memset function returns a pointer to the memory area s.
*/
