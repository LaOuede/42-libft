/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/04 09:38:00 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include <string.h>
Description :
	The strrchr() function locates the first occurrence of c (converted to a
	char) in the string pointed to by s.  The terminating null character is
	considered to be part of the string; therefore if c is `\0', the
	functions locate the terminating `\0'.
	The strrchr() function is identical to strchr(), except it locates the
	last occurrence of c.
Declaration :
	char *strrchr(const char *s, int c)
Parameters :
    s - The string in which to checks for the occurence of c.
	c - The character to check the occurence of.
Return Value :
	The functions strrchr() return a pointer to the located character,
	or NULL if the character does not appear in the string
*/

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		lenght_s;

	lenght_s = (ft_strlen(s));
	if ((char)c == '\0')
		return ((char *)s + lenght_s);
	while (lenght_s >= 0)
	{
		if (s[lenght_s] == (char)c)
			return ((char *)s + lenght_s);
		lenght_s--;
	}
	return (0);
}
