/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/03 15:25:40 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include "libft.h"
Description :
	Allocate (with malloc(3)) and returns a "fresh" string ending with '\0'
	representing the integer n given as argument. Negative numbers must be 
	supported.
Declaration :
	char *ft_itoa(int n)
Parameters :
    n - the integer to be transformed into a string
Return Value :
	The string representing the integer passed as argument.
	If the allocation fails, the function returns NULL.
*/

#include "libft.h"

static int	len_number(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = len_number(n);
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (0);
	s[len--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		s[len--] = (n % 10) + 48;
		n = n / 10;
	}
	s[len] = (n % 10) + 48;
	return (s);
}
