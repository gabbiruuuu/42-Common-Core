#include "libft.h"

// locate character in string
char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return ((char *)&s[i]);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*
char	*strchr(const char *s, int c);
The	strchr(void) function returns a pointer to the first
 occurrence of the character c in the string s.
Here "character" means "byte"; these functions
 do not work with wide or multibyte characters.
The strchr function return a pointer to the matched character
 or NULL if the character is not found.
The terminating null byte is considered part of the string,
 so that if c is specified as '\0',
 these functions return a pointer to the terminator.
*/
