/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:10:10 by eardingh          #+#    #+#             */
/*   Updated: 2022/04/03 18:43:22 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	result = ft_strdup((char *)s);
	if (!result)
		return (NULL);
	i = -1;
	while (result[++i])
		result[i] = f(i, result[i]);
	return (result);
}
