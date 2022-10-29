/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:41:10 by eardingh          #+#    #+#             */
/*   Updated: 2022/10/29 13:41:44 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_char_to_base(unsigned char octet, size_t base)
{
	if (octet > base)
		ft_char_to_base(octet / base, base);
	write(1, &"0123456789ABCDEF"[octet % base], 1);
}
