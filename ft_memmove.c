/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:07:00 by alejogogi         #+#    #+#             */
/*   Updated: 2024/09/25 18:07:08 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // Para usar size_t

void    *memmove(void *dest, const void *src, size_t n)
{
    char *d = (char *)dest;
    const char *s = (const char *)src;
    
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