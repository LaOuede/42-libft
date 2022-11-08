/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/07 13:58:14 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include "libft.h"
Description :
	Allocates (with malloc(3)) and returns a "fresh" link. The variable content
	of the new link is initialized by copy of the parameter of the function.
	The variable next is initialized to NULL.
Declaration :
	t_list *ft_lstnew(void *content)
Parameters :
    content - the content to put in the new link.
Return Value :
	The new link.
	If the allocation fails, the function returns NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;

	new_lst = ft_calloc(1, (sizeof(t_list)));
	if (!new_lst)
		return (0);
	new_lst->content = content;
	new_lst->next = 0;
	return (new_lst);
}
