#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
int		ft_toupper(int i);
int		ft_tolower(int i);

void	*ft_memset(void *s, int c, size_t len);
int		ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);

int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);

#endif
