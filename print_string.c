/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:44:09 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/29 18:33:01 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_string(char *str)
{
	char	*str;

	str = va_args(args, char *);
	if(!str)
	{
		str = NULL;
	}
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}