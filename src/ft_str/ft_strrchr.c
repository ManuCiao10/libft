/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:40:38 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:42:16 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)s;
	if (c == '\0')
		return (&str[len]);
	while (len--)
		if (str[len] == (char)c)
			return (&str[len]);
	return (NULL);
}
