/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/04 15:11:58 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include <string.h>
Description :
	The strdup() function allocates sufficient memory for a copy of the string
    s1, does the copy, and returns a pointer to it.  The pointer may
    subsequently be used as an argument to the function free(3).
    If insufficient memory is available, NULL is returned.
Declaration :
	char *strdup(const char *s1)
Parameters :
    s1 - The string to duplicate.
Return Value :
	The strdup() function returns the pointer to the copy of s1.
*/

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	if (!s1)
		return (0);
	i = 0;
	dest = ft_calloc(sizeof(char), (ft_strlen(s1) + 1));
	if (!dest)
		return (0);
	return (ft_strcpy(dest, s1));
}
