/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/04 14:54:18 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include "libft.h"
Description :
	Allocates (with malloc(3)) and returns an array of "fresh" strings (all
	ending with '\0', including the array itself) obtained by spliting s
	using the character c as a delimiter.
Declaration :
	char **ft_split(char const *s, char c)
Parameters :
	s - the string to split
	c - the delimiter character
Return Value :
	The array of "fresh" strings result of the split
	If the allocation fails, the function returns NULL.
	ex : ft_split ("*hello*fellow***students*", '*') returns the array ["hello, 
	"fellow", "students"]
*/

#include "libft.h"

static int	search_nb_word(char const *s, char c)
{
	int	i;
	int	s_len;
	int	nb_word;

	i = 0;
	s_len = ft_strlen(s);
	nb_word = 0;
	while (i < s_len)
	{
		while (s[i] && s[i] != c)
				i++;
		while (s[i] && s[i] == c && c != '\0')
				i++;
		nb_word++;
	}
	return (nb_word);
}

static size_t	len_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (0);
}

static const char	*get_next_word(char const *s, char c, char *t)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] != c)
	{
		t[j] = s[i];
		i++;
		j++;
	}
	t[j] = '\0';
	while (s[i] && s[i] == c)
		i++;
	return (&s[i]);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**split;

	if (!s)
		return (0);
	while (*s == c && c != '\0')
		s++;
	split = ft_calloc((search_nb_word(s, c)) + 1, sizeof(char *));
	if (!split)
		return (0);
	word = 0;
	while (word < (search_nb_word(s, c) + word))
	{
		split[word] = ft_calloc((len_word(s, c) + 1), sizeof(char));
		if (split[word] == 0)
		{
			free_tab(split);
			return (0);
		}
		s = get_next_word(s, c, split[word]);
		word++;
	}
	split[word] = 0;
	return (split);
}
