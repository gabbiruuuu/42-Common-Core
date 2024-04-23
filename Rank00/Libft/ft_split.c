/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:49:12 by analmeid          #+#    #+#             */
/*   Updated: 2024/04/23 15:21:28 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wordcount(char *str, char c)
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

/* static void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] && str[j] == c)
		j++;
	while (str[j + i] && str[j + i] != c)
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}
*/

static char	*ft_alloc(char *str, char c, int *k)
{
	int		i;
	char	*word;

	word = NULL;
	i = *k;
	// por i com valor inicial de k
	while (str[*k])
	{
		if (str[*k] != c)
		{
			while (str[*k] && str[*k] != c)
				*k += 1;
			word = (char *)malloc(sizeof(char *) * (*k - i+ 1));
			if (word == NULL)
				return (NULL);
			printf("%d\n",(i));
			//printf("%d\n",(*k));
		}
		*k += 1;
	//	printf("%d\n", *k);
	}
	//ft_strlcpy(word, str, *k);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	j = ft_wordcount((char *)s, c);
	str = (char **)malloc(sizeof(char *) * (j + 1));
	i = 0;
	k = 0;
	if (str == NULL)
		return (NULL);
	while (i < j)
	{
		str[i] = ft_alloc((char *)s, c, &k);
		if (str == NULL)
		{
			ft_free(&str[i]);
		}
		i++;
	}
	return (str);
}
/*
s: The string to be split.
c: The delimiter character.

The array of new strings resulting from the split.
NULL if the allocation fails.

Allocates (with malloc(3)) and returns an array
 of strings obtained by splitting ’s’ using the
 character ’c’ as a delimiter.
The array must end with a NULL pointer.
*/

int	main(void)
{
	char	*s;
	char	**dest;
	int		i;

	s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	dest = ft_split(s, ' ');
	i = 0;
	//printf("%d", ft_wordcount(s,' '));
	while (dest[i])
	{
		printf("%s\n", dest[i]);
		i++;
	}
}
