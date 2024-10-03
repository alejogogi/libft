/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:38:47 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/02 17:06:59 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>/*borrar libreria*/

char	*ft_strnstr(const char *principal, const char *subcadena, size_t n)
{
	size_t	i;
	size_t	a;

	if (!*subcadena)
	{
		return ((char *)principal);
	}
	i = 0;
	while (i < n && principal[i])
	{
		a = 0;
		while (principal[i + a] == subcadena[a] && (i + a) < n)
		{
			if (subcadena[a + 1] == '\0')
			{
				return ((char *)&principal[i]);
			}
			a++;
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	*texto;
	const char	*buscar;
	char		*res;
	size_t		i;

	texto = "Holla mundo";
	buscar = "mundo";
	i = 12;
	res = ft_strnstr(texto, buscar, i);
	if (res)
	{
		printf("sub string encontrado: '%s'\n", res);
	}
	else
	{
		printf("sub string no encontrado. \n");
	}
	return (0);
}
*/