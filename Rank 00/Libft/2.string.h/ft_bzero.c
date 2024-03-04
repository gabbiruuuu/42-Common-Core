#include "libft.h"

// zero a byte string
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
