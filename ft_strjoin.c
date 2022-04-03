/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:40:11 by eardingh          #+#    #+#             */
/*   Updated: 2022/03/31 17:27:54 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len1;
	int		len2;
	int		i;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (result == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			result[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			result[len1] = s2[i];
			len1++;
		}
		result[len1] = '\0';
		return (result);
	}
	return (NULL);
}
