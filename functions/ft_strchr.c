/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwenolaleroux <gwenolaleroux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2023/01/26 11:15:27 by gwenolalero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include <string.h>
Description :
	The strchr() function locates the first occurrence of c (converted to a
	char) in the string pointed to by s. The terminating null character is
	considered to be part of the string; therefore if c is `\0', the
	functions locate the terminating `\0'.
Declaration :
	char *strchr(const char *s, int c)
Parameters :
	s - The string in which to checks for the occurence of c.
	c - The character to check the occurence of.
Return Value :
	The functions strchr() return a pointer to the located character,
	or NULL if the character does not appear in the string
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}
