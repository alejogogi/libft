/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:54:08 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/25 22:10:24 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	bzero(void *s, size_t n)
{
	size_t	c;
	unsigned char	*ptr;

	c = 0;
	ptr = (unsigned char *)s;
	while (c < size)
	{
		ptr[c] = 0;
		c++;
	}
}
