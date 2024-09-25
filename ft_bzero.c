/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:06:05 by alejogogi         #+#    #+#             */
/*   Updated: 2024/09/25 18:06:15 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	bzero(void *s, size_t n)
{
	size_t	c;
	unsigned char *ptr;

	c = 0;
	ptr = (unsigned char *)s;
	
	while (c < size)
	{
		ptr[c] = 0;
		c++;
	}
}