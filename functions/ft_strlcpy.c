/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/10 14:23:06 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include <string.h>
Description :
	strlcpy() copies up to dstsize - 1 characters from the string src to dst,
	NUL-terminating the result if dstsize is not 0.
Declaration :
	size_t	strlcpy(char *dst, const char *src, size_t dstsize)
Parameters :
	dst - The destiny string in which to copy.
	src - The source string to copy.
	dstsize - The total number of bytes in destiny.
Return Value :
	the strlcpy() function returns the length of the string it tried to create.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lenght_src;

	if (!dst || !src)
		return (0);
	i = 0;
	lenght_src = ft_strlen(src);
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lenght_src);
}
