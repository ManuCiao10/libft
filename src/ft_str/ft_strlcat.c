/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:40:12 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:43:04 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	j = len_dst;
	i = 0;
	if (len_dst >= dstsize)
		len_dst = dstsize;
	if (len_dst < dstsize - 1 && dstsize)
	{
		while (src[i] && len_dst + i < dstsize - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	return (len_dst + len_src);
}
