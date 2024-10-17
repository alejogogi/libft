/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 23:13:39 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/17 23:37:43 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	
	i = 0;
	while(*s)
	{
		write(fd, s, 1);
		i++;
	}
}

/*
int main(void)
{
	ft_putstr_fd("holla, 42! \n");
	return(0);	
}
*/