/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:04:48 by alejogogi         #+#    #+#             */
/*   Updated: 2024/11/01 18:28:43 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_hex(unsigned long num)
{
	char	hex_digit;

	hex_digit = "0123456789abcdef"[num % 16];
	if(num >= 16)
	{
		print_hex(num / 16)
	}
	else
	{
		print_char(hex_digit);
	}
	return(0);
}