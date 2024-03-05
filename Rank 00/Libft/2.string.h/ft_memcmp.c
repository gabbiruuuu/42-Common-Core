#include "libft.h"

// compare memory areas
// return 0 if n=0
// return difference
int	memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int	memcmp(const void *s1, const void *s2, size_t n)
The memcmp function returns an integer less than, equal to, or
 greater than zero if the first n bytes of s1 is found,
 respectively, to be less than, to match, or be greater
 than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign
 of the difference  between  the  first  pair of bytes
 (interpreted as unsigned char) that differ in s1 and s2.
If n is zero, the return value is zero.
*/
