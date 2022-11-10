/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/10 14:13:06 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include "libft.h"
Description :
	Outputs the char c to the file descriptor fd.
Declaration :
	void ft_putchar_fd(char c, int fd);
Parameters :
    c - Character to output	
	fd -  The file descriptor
Return Value :
	None
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
