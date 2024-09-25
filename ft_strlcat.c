/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:30 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/25 21:57:34 by alejagom         ###   ########.fr       */
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