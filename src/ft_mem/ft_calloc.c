/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:39:12 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:44:18 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	if (size == SIZE_MAX)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
