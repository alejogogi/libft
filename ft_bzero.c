/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:54:08 by alejagom          #+#    #+#             */
/*   Updated: 2024/10/03 13:31:28 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>  /*borrar libreria*/
#include <string.h> /*borrar libreria*/

void	ft_bzero(void *s, size_t n)
{
	size_t			c;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = 0;
	while (c < n)
	{
		ptr[c] = 0;
		c++;
	}
}

/*
int	main(void)
{
	char	pru[20] = "hola mundo";
	size_t	d;
	size_t	i;

	printf("escriba la distancia: ");
	scanf("%zu", &d);
	printf("sin cambios: %s\n", pru);
	ft_bzero(pru, d);
	printf("string con cambios: \n");
	for (i = 0; i < 20; i++)
	{
		if (pru[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", pru[i]);
		}
	}
	return (0);
}
*/