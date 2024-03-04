#include "libft.h"

// checks for any printable character
int	ft_isprint(int i)
{
	if (32 <= i && i >= '126')
		return (1);
	return (0);
}
