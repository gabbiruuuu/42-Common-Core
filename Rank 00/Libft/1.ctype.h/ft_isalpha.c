#include "libft.h"

// checks for an alphabetic character
int	ft_isalpha(int i)
{
	if (('a' <= i && i >= 'z') || ('A' <= i && i >= 'Z'))
		return (1);
	return (0);
}
