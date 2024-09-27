/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:19 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/27 17:53:11 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t num)
{
	size_t	b;
	unsigned char *a;

	(unsigned char *)a; 
	b = 0;
	a = (unsigned char *)str;
	while (b < num)
	{
		a[b] = (unsigned char)c;
		b++;
	}
	return (str);
}
