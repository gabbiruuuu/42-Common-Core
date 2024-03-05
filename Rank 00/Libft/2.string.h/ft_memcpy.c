#include "libft.h"

// copy memory area
void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (dest);
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
void	*memcpy(void *dest, const void *src, size_t n);
The	memcpy(void) function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap.
Use	memmove(x) if the memory areas do overlap.
The memcpy function returns a pointer to dest.
*/
