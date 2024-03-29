/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:41:14 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:41:37 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	get_length(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr && ++len)
		nbr /= 10;
	return (len);
}

static int	sign_handle(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = get_length(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[--len] = sign_handle(n % 10) + '0';
		n /= 10;
	}
	return (str);
}
