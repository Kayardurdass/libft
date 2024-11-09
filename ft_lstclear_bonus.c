/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 02:15:07 by uanglade          #+#    #+#             */
/*   Updated: 2024/11/09 02:30:40 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*first;

	if (!lst || !(*lst) || !del)
		return ;
	first = *lst;
	while ((*lst)->next && *lst)
	{
		*lst = (*lst)->next;
		del((*lst)->content);
		free(*lst);
	}
	del(first->content);
	free(first);
	first = NULL;
}
