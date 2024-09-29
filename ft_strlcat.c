/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:30 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/29 18:52:44 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> /*borrar libreria*/
#include <stdio.h> /*borrar libreria*/
/*#include "libft"*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i = 0;
	
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size <= src_len)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
    char    dest[20] = "Holla";
    const char  *src = " mundo";
    size_t  result;

    printf("primera: %s\n", dest);
    result = ft_strlcat(dest, src, sizeof(dest));
    printf("despues: %s\n", dest);
    printf("cantidad: %zu\n", result);
    return 0;
}