/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:48:10 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/10 14:09:08 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Library :
	#include "libft.h"
Description :
	Delete and free the memory of the element passed in parameter, and of all
	the elements that follow, using 'del' and free(3).
	Finally, the initial pointer must be set to NULL.
Declaration :
	void ft_lstclear(t_list **lst, void (*del)(void*))
Parameters :
	lst - The address of the pointer to an element.
	del - The address of the function to delete the content of the element.
Return Value :
	None.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
