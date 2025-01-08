/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:04:13 by alejogogi         #+#    #+#             */
/*   Updated: 2025/01/08 17:18:03 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	int				ln;

	ln = 0;
	if (!ptr)
	{
		ft_putstr("(nil)");
	}
	ln += ft_putstr("0x");
	ln += ft_puthex((unsigned long)ptr, 'x');
	return (ln);
}
