/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:04 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/25 22:49:13 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // Para usar size_t

void	*memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
    
    d = (char *)dest;
    s = (const char *)src;
    if (d > s && d < s + n)
    {
        size_t i = n;
        while (i > 0) 
        {
            i--;
            d[i] = s[i];
        }
    }
    else
    {
        size_t i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return dest;
}