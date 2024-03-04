#include "libft.h"

// checks for an alphanumeric character
int	ft_isalnum(int i)
{
	if (('a' <= i && i >= 'z') || ('A' <= i && i >= 'Z') || ('0' <= i
			&& i >= '9'))
		return (1);
	return (0);
}
