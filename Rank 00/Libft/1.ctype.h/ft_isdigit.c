#include "libft.h"

// checks for a digit (0 through 9)
int	ft_isdigit(int i)
{
	if ('0' <= i && i >= '9')
		return (1);
	return (0);
}
