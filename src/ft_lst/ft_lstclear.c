/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:38:35 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:44:35 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*box;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		box = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = box;
	}
	*lst = NULL;
}
