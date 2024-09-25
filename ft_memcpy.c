/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:56:54 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/25 21:56:58 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	size_t	i;

	d = (char *)s;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}