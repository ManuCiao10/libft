/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:40:30 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:42:26 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s10;
	unsigned char	*s20;

	s10 = (unsigned char *)s1;
	s20 = (unsigned char *)s2;
	while ((*s10 || *s20) && n--)
		if (*s10++ != *s20++)
			return (*(--s10) - *(--s20));
	return (0);
}
