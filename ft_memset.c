/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 08:43:00 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/08 10:46:58 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>/*borrar libreria*/
#include <string.h> /*borrar libreria*/
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*a;
	size_t			b;

	b = 0;
	a = (unsigned char *)str;
	while (b < n)
	{
		a[b] = (unsigned char)c;
		b++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[15] = "buenastardes";
	char	c;
	size_t	n;

	printf("letra a poner:\n");
	scanf("%c", &c);
	printf("numero de espacios a correr:\n");
	scanf("%zu", &n);
	printf("frase sin cambiar: %s\n", str);
	ft_memset(str, c, n);
	printf("string: %s\n", str);
	return(0);
}
*/
