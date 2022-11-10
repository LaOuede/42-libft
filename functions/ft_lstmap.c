/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/10 14:10:03 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include "libft.h"
Description :
	Iterates on the list 'lst' and applies the function 'f' to the content of
	each element. Creates a new list resulting from the successive applications
	of 'f'. The 'del' function is there to destroy the content of an element
	if necessary.
Declaration :
	t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
Parameters :
    lst - The address of the pointer to an element. f: The address of the
	function to apply.
	del - The address of the function to delete the content of an element.
Return Value :
	The 'new' list.
	NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (0);
	new_lst = 0;
	while (lst != NULL)
	{
		new_node = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&new_lst, new_node);
		if (ft_lstlast(new_lst) == NULL)
		{
			ft_lstclear(&new_lst, *del);
			return (0);
		}
		lst = lst->next;
	}
	return (new_lst);
}
