/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwenolaleroux <gwenolaleroux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2023/01/26 12:09:01 by gwenolalero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include "libft.h"
Description :
	Applies the function f to each character of the string given as argument, 
	and passing its index as first argument. Each character is passed by adress
	to f to be modified if necessary.
Declaration :
	void ft_striteri(char *s, void (*f)(unsigned int, char *))
Parameters :
	s - the string to map
	f - the function to apply to each character of s and its index
Return Value :
	None
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
