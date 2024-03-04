
#include "libft.h"

// convert char to lowercase
int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		i += 32;
		return (i);
	}
	return (i);
}
