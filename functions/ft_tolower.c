/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/10 14:24:23 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include <ctype.h>
Description :
	The tolower() function converts an upper-case letter to the corresponding
	lower-case letter.  The argument must be representable as an unsigned
	char or the value of EOF.
Declaration :
	int	tolower(int c)
Parameters :
    c - The character to convert.
Return Value :
	If the argument is a upper-case letter, the tolower() function returns the 
	corresponding lower-case letter if there is one; otherwise, the argument is 
	returned unchanged.
*/
int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}
