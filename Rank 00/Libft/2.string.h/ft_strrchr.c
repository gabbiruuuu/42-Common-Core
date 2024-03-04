#include "libft.h"

// locate character in string
char	*strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
char	*strrchr(const char *s, int c);
The	strrchr(void) function returns a pointer to the last
 occurrence of the character c in the string s.
Here "character" means "byte"; these functions
 do not work with wide or multibyte characters.
The strrchr function return a pointer to the matched character
 or NULL if the character is not found.
The terminating null byte is considered part of the string,
 so that if c is specified as '\0',
 these functions return a pointer to the terminator.
*/
