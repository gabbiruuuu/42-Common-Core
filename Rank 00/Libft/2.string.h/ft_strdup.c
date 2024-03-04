#include "libft.h"

// creates a dupplicate for the string passed as parameter
char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s) + 1;
	str = (char *)malloc(sizeof(*str) * j);
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
The strdup() function returns a pointer to a
new string which is a duplicate of the string s.
*/
