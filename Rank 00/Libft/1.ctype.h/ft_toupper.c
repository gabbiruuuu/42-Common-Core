#include "libft.h"

// convert char to uppercase
int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		i -= 32;
		return (i);
	}
	return (i);
}
