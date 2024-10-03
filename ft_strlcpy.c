/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:42 by alejagom          #+#    #+#             */
/*   Updated: 2024/10/03 20:14:32 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h> /*borrar libreria*/
#include <stdio.h>  /*borrar libreria*/

size_t	_ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	while (src[b] != '\0')
	{
		b++;
	}
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (b);
}

/*
int	main(void)
{
	char	s[] = "buenasss hola";
	char	dest[15];
	size_t	result;

	result = strlcpy(dest, s, sizeof(dest));
	printf("cadena %zu\n", result);
	return (0);
}
*/