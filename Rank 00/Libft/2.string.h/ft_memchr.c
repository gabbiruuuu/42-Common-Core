#include "libft.h"

// scan memory for a character
void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*void	*memchr(const void *s, int c, size_t n)
The memchr function scans the initial n bytes of the memory area
 pointed to by s for the first instance of c.
Both c and the bytes of the memory area pointed to by s are
 interpreted as unsigned char.
The memchrfunction return a pointer to the matching byte
 or NULL if the character does not occur in the given memory area.
*/
