/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:13:42 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/29 10:47:30 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *, ...)
{
	va_list args;
	va_start(args, *);
	while(*)
	{
		if(+ == %)
		{
			*++;
		}
		else
		{
			write(1, *, 1);
		}
		+**;
	}
	va_end(args);
	return(0);	
}
