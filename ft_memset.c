/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:19 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/26 18:39:53 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t num)
{
	size_t	b;

	(unsigned char *)s;
	b = 0;
	s = (unsigned char *)str;
	while (b < num)
	{
		s[b] = (unsigned char)c;
		b++;
	}
	return (str);
}
