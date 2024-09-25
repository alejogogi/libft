/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:07:49 by alejogogi         #+#    #+#             */
/*   Updated: 2024/09/25 18:08:02 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = 0;
    size_t src_len = 0;
    size_t i = 0;
    
    while (dest[dest_len] != '\0' && dest_len < size)
    {
        dest_len++;
    }
    while (src[src_len] != '\0')
    {
        src_len++;
    }
    if (size <= dest_len)
    {
        return size + src_len;
    }
    while (src[i] != '\0' && dest_len + i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return (dest_len + src_len);
}