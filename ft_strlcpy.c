/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:07:24 by alejogogi         #+#    #+#             */
/*   Updated: 2024/09/25 18:07:31 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t strlcpy(char *dest, const char *src, size_t size)
{
    size_t i = 0;
    size_t src_len = 0;

    while (src[src_len] != '\0')
    {
        src_len++;
    }
    if (size > 0)
    {
        while (i < size - 1 && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
            dest[i] = '\0';
    }
    return (src_len);
}