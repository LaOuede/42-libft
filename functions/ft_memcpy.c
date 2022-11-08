/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/07 08:43:11 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include <string.h>
Description :
	The memcpy() function copies n bytes from memory area src to memory area
	dst. If dst and src overlap, behavior is undefined.
	Applications in which dst and src might overlap should use memmove(3) instead.
Declaration :
	void	*memcpy(void *restrict dst, const void *restrict src, size_t n);
Parameters :
	dest − This is pointer to the destination array where the content
	is to be copied, type-casted to a pointer of type void*.
	src − This is pointer to the source of data to be copied,
	type-casted to a pointer of type void*.
    n − This is the number of bytes to be copied.
Return Value :
	The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if ((!dst) || (!src))
		return (dst);
	while (n > 0)
	{
		((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
		n--;
	}
	return (dst);
}
