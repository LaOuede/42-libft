/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:59:40 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/04 15:13:37 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include "libft.h"

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
