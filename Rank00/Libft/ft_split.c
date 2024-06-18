/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:10:26 by analmeid          #+#    #+#             */
/*   Updated: 2024/06/18 13:23:12 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wordcount(const char *str, char c)
{
	int	i;
	int	wordcount;

	i = 0;
	wordcount = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			wordcount++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (wordcount);
}

static void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	*ft_strldup(const char *str, int start, int end)
{
	char	*result;
	int		i;

	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		result[i] = str[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}

static char	**ft_allocate_copy(const char *s, char c, int j, char **str)
{
	int	start;
	int	end;
	int	i;

	i = 0;
	start = 0;
	while (s[start] && s[start] == c)
		start++;
	while (i < j)
	{
		end = start;
		while (s[end] && s[end] != c)
			end++;
		str[i] = ft_strldup(s, start, end);
		if (!str[i])
			return (ft_free(str), NULL);
		start = end;
		while (s[start] && s[start] == c)
			start++;
		i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		j;

	if (s == NULL)
		return (NULL);
	j = ft_wordcount(s, c);
	str = (char **)malloc(sizeof(char *) * (j + 1));
	if (str == NULL)
		return (NULL);
	str = ft_allocate_copy(s, c, j, str);
	return (str);
}

/*
s: The string to be split.
c: The delimiter character.

Returns the array of new strings resulting from the split.
NULL if the allocation fails.

Allocates (with malloc(3)) and returns an array
 of strings obtained by splitting ’s’ using the
 character ’c’ as a delimiter.
The array must end with a NULL pointer.
*/

/* int	main(void)
{
	char	**dest;
	char	*s;
	int		i;

	s = "lorem ipsum dolor sit amet,
		consectetur adipiscing elit. Sed non risus. Suspendisse";
	dest = ft_split(s, ' ');
	i = 0;
	printf("%d", ft_wordcount(s,' '));
	while (dest[i])
	{
		printf("%s\n", dest[i]);
		free(dest[i]);
		i++;
	}
	free(dest);
} */
