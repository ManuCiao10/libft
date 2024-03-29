/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:39:24 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:50:15 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src1;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (n--)
		*dest++ = *src1++;
	return (dst);
}
