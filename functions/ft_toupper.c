/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/10 14:24:29 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include <ctype.h>
Description :
	The toupper() function converts a lower-case letter to the corresponding 
	upper-case letter. The argument must be representable as an unsigned char 
	or the value of EOF.
Declaration :
	int	toupper(int c)
Parameters :
    c - The character to convert.
Return Value :
	If the argument is a lower-case letter, the toupper() function returns the 
	corresponding upper-case letter if there is one; otherwise, the argument is 
	returned unchanged.
*/
int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}
