/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:38:54 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:44:24 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_element;

	n_element = malloc(sizeof(t_list));
	if (!n_element)
		return (NULL);
	n_element->content = content;
	n_element->next = NULL;
	return (n_element);
}
