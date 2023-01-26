/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwenolaleroux <gwenolaleroux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:00:44 by gle-roux          #+#    #+#             */
/*   Updated: 2023/01/26 11:19:53 by gwenolalero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include <ctype.h>
Description :
	The isalpha() function tests for any character for which isupper(3) or 
	islower(3) is true. The value of the argument must be representable as an 
	unsigned char or the value of EOF.
Declaration :
	int	ft_isalpha(int c)
Parameters :
	c - The character to test.
Return value :
	The isalpha() function returns zero if the character tests false and 
	returns non-zero if the character tests true.
*/
int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
