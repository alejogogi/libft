/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:04:48 by alejogogi         #+#    #+#             */
/*   Updated: 2024/11/27 17:05:13 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_hex(unsigned long num, a)
{
	char	hex_digit;

	hex_digit = "0123456789abcdef"[num % 16];
	if (num >= 16)
	{
		ft_print_hex(num / 16)
	}
	else
	{
		ft_print_char(hex_digit);
	}
	return (0);
}

static 	ft_print_hexmin(unsigned long num)
{
	char	hex_digit;

	hex_digit = "0123456789abcdef"[num % 16];
	if (num >= 16)
	{
		ft_print_hex(num / 16)
	}
	else
	{
		ft_print_char(hex_digit);
	}
	return (0);
}
