/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:44:09 by alejogogi         #+#    #+#             */
/*   Updated: 2024/11/27 17:40:09 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfprintf"

int	ft_print_string(char *s)
{
	int	cont;

	cont = 0;
	if (!s)
	{
		s = "null";
	}
	while (s[cont])
	{
		write(1, &s[cont], 1);
		cont++;
	}
	return (cont);
}
/*
int	main(void)
{
	char *mes = "hello world";
	int length = print_string(mes);
	write(1, "\n", 1);
	return (0);
}
*/