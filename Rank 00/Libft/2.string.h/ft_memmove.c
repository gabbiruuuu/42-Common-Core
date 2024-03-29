#include "libft.h"

// copy memory area
// if(dest > src) -> from the end to avoid overwritting
void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (dest);
	if (dest > src)
		while (n > 0)
		{
			d[n - 1] == s[n - 1];
			n--;
		}
	else if (dest < src)
		while (i < n)
		{
			d[i] == s[i];
			i++;
		}
}

/*void	*memmove(void *dest, const void *src, size_t n);
The	memmove function copies n bytes from memory area src
 to memor area dest.
The memory areas may overlap: copying takes place as though
 the bytes in src are first copied into a temporary array
 that does not overlap src or dest, and the bytes are then
 copied from the temporary array to dest.
The	memmove function returns a pointer to dest.
*/
