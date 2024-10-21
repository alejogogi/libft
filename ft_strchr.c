/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:38:14 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/21 01:47:29 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	a;

	a = (char)c;
	while (*str != '\0')
	{
		if (*str == a)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*string;
	char	buscar;
	char	*resultado;

	string = "buenas Mundo";
	buscar = 'z';
	resultado = ft_strchr(string, buscar);
	if (resultado != 0)
	{
		printf("caracter '%c' encontrado %s\n", buscar, resultado);
	}
	else
	{
		printf("caracter no encontrado '%c'\n", buscar);
	}
	return (0);
}
*/