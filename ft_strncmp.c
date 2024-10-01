/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:52:50 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/01 19:03:46 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>/*borrar*/
#include <stdio.h>/*borrar libreria*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n && s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		}
		a++;
	}
	if (a < n && (s1[a] != '\0' || s2[a] != '\0'))
	{
		return ((unsigned char)s1[a] - (unsigned char)s2[a]);
	}
	return (0);
}

/*
int	main(void)
{
	const char	*str1;
	const char	*str2;
	int	resultado;

	str1 = "hello world";
	str2 = "hello planet";
	resultado = ft_strncmp(str1, str2, 5);
	if (resultado == 0)
	{
		printf("las primeras palabras son iguales \n");
	}
	else if (resultado > 0)
	{
		printf("la cadena '%s' es mayor que la cadena '%s'\n", str1, str2);
	}
	else
	{
		printf("la cadena '%s' es menor que la cadena '%s'\n", str1, str2);
	}
	return (0);
}
*/