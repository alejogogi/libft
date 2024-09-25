/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:19 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/25 21:57:23 by alejagom         ###   ########.fr       */
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