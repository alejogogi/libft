/* ********************************************************************  ****** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:19:30 by alejagom          #+#    #+#             */
/*   Updated: 2024/10/31 12:25:27 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_pointer(void *ptr)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	print_string("0x");
	if(address == 0)
	{
		print_char('0');
	}
	else
	{
		print_hex(address);
	}
	return(0);
}