/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:19 by alejagom          #+#    #+#             */
/*   Updated: 2024/10/03 18:04:29 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>/*borrar libreria*/
#include <string.h> /*borrar libreria*/

void	*ft_memset(void *str, int c, size_t num)/*llena los bloques de memoria con un caracter*/
{
	unsigned char	*a;
	size_t			b;

	b = 0;
	a = (unsigned char *)str;
	while (b < num)
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
	unsigned char c;
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