/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/04 15:10:52 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Library :
	#include <string.h>
Description :
	The memcmp() function compares byte string s1 against byte string s2.  Both
    strings are assumed to be n bytes long.
Declaration :
	int memcmp(const void *s1, const void *s2, size_t n)
Parameters :
    s1 - string to compare
    s2 - Other string to compare
    n - size of the strings
Return Value :
	The memcmp() function returns zero if the two strings are identical,
    otherwise returns the difference between the first two differing bytes
    (treated as unsigned char values, so that ‘\200’ is greater than ‘\0’, for
    example).  Zero-length strings are always identical.  This behavior is not
    required by C and portable code should only depend on the sign of the
    returned value.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (n > i)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
			i++;
		else
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}
