#include "libft.h"

// compare two strings
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_strncmp("ABC", "ABC", 3));
	printf("\n%d", ft_strncmp("ABC", "AB", 2));
}*/

/*int strncmp(const char *s1, const char *s2, size_t n);
The	strncmp(void) compares only the first (at most) n bytes of s1 and s2*/
