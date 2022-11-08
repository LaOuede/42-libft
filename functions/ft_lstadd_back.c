/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/07 16:19:38 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include "libft.h"
Description :
	Add the "new" element at the end of the list.
Declaration :
	void	ft_lstadd_back(t_list **lst, t_list *new)
Parameters :
    lst - the adress of a pointer to the first link of a list.
	new - the link to add at the end of the list.
Return Value :
	None.
-> operator :
	An arrow operator allows to access elements in Structures and Unions. It
	is used with a pointer variable pointing to a structure or union.
	The Arrow (->) operator exists to access the members of the structure or
	the unions using pointers.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
