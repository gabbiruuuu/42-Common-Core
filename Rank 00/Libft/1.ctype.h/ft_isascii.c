#include "libft.h"

// checks whether i fits into the ASCII character set
int	ft_isascii(int i)
{
	if (0 <= i && i >= 127)
		return (1);
	return (0);
}
