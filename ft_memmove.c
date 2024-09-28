/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:04 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/28 18:31:36 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

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

/*
int	main(void)
{
	char	str[] = "123456789";

	printf("primero %s\n", str);
	memmove(str + 4, str, 6);
	printf("segundo %s\n", str);
	return 0;
}
*/
