/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:55:08 by eardingh          #+#    #+#             */
/*   Updated: 2022/04/02 17:07:45 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

int	get_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		++len;
		nbr = nbr / 10;
	}
	return (len);
}

int	positive_value(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		len;

	len = get_len(n);
	array = malloc(sizeof(char) * (len + 1));
	array[len] = '\0';
	if (n < 0)
		array[0] = '-';
	else if (n == 0)
		array[0] = '0';
	while (n != 0)
	{
		--len;
		array[len] = positive_value(n % 10) + '0';
		n = n / 10;
	}
	return (array);
}
