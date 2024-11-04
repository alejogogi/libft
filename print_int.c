/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:16:28 by alejogogi         #+#    #+#             */
/*   Updated: 2024/11/04 10:28:44 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_int(int n)
{
	char	buffer[12];
	int		id;

	id = 0;
	if (n == 0)
		write(1, "0", 1);
	return ;
	if (n < 0)
		write(1, "-", 1);
	n = -n;
	while (n > 0)
	{
		buffer[id] = (n % 10) + 48;
		n = n / 10;
		id++;
	}
	id--;
	while (id >= 0)
	{
		write(1, &buffer[id], 1);
		id--;
	}
}

int	main(void)
{
	print_int(-52647);
	write(1, "\n", 1);
	return (0);
}
