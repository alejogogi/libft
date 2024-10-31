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

#include "libftprintf.h"

void	print_pointer(int *ptr)
{
	while(ptr != NULL)
	{
		write(1, &ptr, 1);
		ptr++;
	}
	return(0);
}