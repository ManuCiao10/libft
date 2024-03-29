/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:40:00 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:44:11 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	while (s[i])
	{
		s1[i] = s[i];
		i++;
	}
	return (s1);
}
