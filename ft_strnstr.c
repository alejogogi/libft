/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:38:47 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/01 19:02:58 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>/*borrar libreria*/
#include "libft.h"

char	*ft_strnstr(const char *principal, const char *subcadena, size_t n)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = 0;
	if (!*subcadena)
	{
		return ((char *)principal);
	}
	while (i< n)
	{
		while (principal[i + a] == subcadena[a] && (i + a) < n)
		{
			if (!principal [a + 1])
			{
				return ((char *)&principal[i]);
			}
			a++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*texto;
	const char	*buscar;
	char		 *res;
	size_t	i;

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
/*pendiente de correccion y exolicacion*/