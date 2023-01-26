/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwenolaleroux <gwenolaleroux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2023/01/26 11:11:23 by gwenolalero      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include "libft.h"
Description :
	Outputs the string s to the file descriptor fd.
Declaration :
	void ft_putstr_fd(char const *s, int fd);
Parameters :
	s - The string to output.
	fd - The file descriptor.
Return Value :
	None
*/
void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
