/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:46:20 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/10/04 22:19:09 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_fclean(t_list **lst, t_list **head_node, void (*del)(void *))
{
	ft_lstclear(lst, del);
	ft_lstclear(head_node, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_node;
	t_list	*current_node;

	if (!lst || !f || !del)
		return (NULL);
	head_node = ft_lstnew(f(lst->content));
	if (head_node == NULL)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	current_node = head_node;
	lst = lst->next;
	while (lst != NULL)
	{
		current_node = ft_lstnew(f(lst->content));
		if (current_node == NULL)
		{
			ft_fclean(&lst, &head_node, del);
			return (NULL);
		}
		ft_lstadd_back(&head_node, current_node);
		lst = lst->next;
	}
	return (head_node);
}
