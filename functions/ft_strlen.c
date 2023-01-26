/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwenolaleroux <gwenolaleroux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:59:40 by gle-roux          #+#    #+#             */
/*   Updated: 2023/01/26 12:22:21 by gwenolalero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include <string.h>
Description :
	The strlen() function computes the length of the string s.
Declaration :
	size_t	strlen(const char *s);
Parameters :
	s - The string to compute length.
Return Value :
	The strlen() function returns the number of characters that precede the 
	terminating NUL character.  
*/
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
