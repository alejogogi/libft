/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:05:25 by alejogogi         #+#    #+#             */
/*   Updated: 2024/09/25 18:05:35 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memset(void *ptr, int c, size_t num)
{
	unsigned char	*c;
	size_t	*b;

	b = 0;
	c = (unsigned char*) ptr;
	
	while (b < num)
	{
		c[b] = (unsigned char *) value;
		b++;
	}
	return (ptr);
}