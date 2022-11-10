/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/10 14:10:22 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include "libft.h"
Description :
	Count the number of elements in the list
Declaration :
	int ft_lstsize(t_list *lst)
Parameters :
    lst - the beginning of the list
Return Value :
	The size of the list
*/
int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*temp;

	size = 0;
	temp = lst;
	if (!lst)
		return (0);
	while (temp->next != NULL)
	{
		size++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		size++;
	return (size);
}
