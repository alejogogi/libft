/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:03:56 by alejogogi         #+#    #+#             */
/*   Updated: 2025/01/08 16:34:08 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(int num)
{
	long	n;
	int		ln;

	ln = 0;
	n = num;
	if (num < 0)
	{
		ft_putstr(NULL);
	}
	if (n >= 10)
	{
		ln += ft_putunbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	return (ln);
}
