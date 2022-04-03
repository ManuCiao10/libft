/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:07:10 by eardingh          #+#    #+#             */
/*   Updated: 2022/03/31 12:00:27 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptemp;

	ptemp = (char *)s;
	i = 0;
	while (i < n)
	{
		if (ptemp[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
