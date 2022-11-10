/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/10 14:22:18 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include "libft.h"
Description :
	Allocates (with malloc(3)) and returns a "fresh" string endling with '\0', 
	result of the concatenation of s1 and s2.
Declaration :
	char *ft_strjoin(char const *s1, char const *s2)
Parameters :
	s1 - the prefix string
	s2 - the suffix string
Return Value :
	The "fresh" string result of the concatenation of the 2 strings.
	If the allocation fails, the function returns NULL.
*/
char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s3 = ft_calloc((len_s1 + len_s2 + 1), sizeof(char));
	if (!s3)
		return (0);
	i = 0;
	while (s1 && len_s1--)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && len_s2--)
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
