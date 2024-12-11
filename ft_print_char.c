/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:36:29 by alejogogi         #+#    #+#             */
/*   Updated: 2024/11/25 20:39:23 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(char c)
{
	if (write(1, &c, 1) < 0)
	{
		write(2, "error al escribir el caracter\n", 30);
	}
}
/*
int	main(void)
{
	int a = "a";

	print_char("asi queda, \n", a);
	return (0);
}
*/
