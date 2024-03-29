/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:38:50 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:44:28 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_element;
	t_list	*n_list;

	if (!lst || !f)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		n_element = ft_lstnew((*f)(lst->content));
		if (!n_element)
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_element);
		lst = lst->next;
	}
	return (n_list);
}
