/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 06:56:58 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/08 10:31:42 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> /*borrar libreia*/
#include <stdlib.h>/*borrar libreria*/
#include <string.h>/*borrar libreria*/
#include <unistd.h>/*borrar libreria*/

char	*ft_strdup(const char *str)
/*crea una copia exacta del string en la memoria*/
{
	size_t	longitud;
	size_t	i;
	char	*cop;

	longitud = 0;
	i = 0;
	while (str[longitud] != '\0')
	{
		longitud++;
	}
	cop = (char *)malloc((longitud + 1) * sizeof(char));
	if (!cop)
	{
		return (0);
	}
	while (i <= longitud)
	{
		cop[i] = str[i];
		i++;
	}
	return (cop);
}

/*
int	main(void)
{
	const char	*orig = "hola mundo";
	char		*cop;

	cop = ft_strdup(orig);
	if (cop != NULL)
	{
		printf("cadena original %s\n", orig);
		printf("cadena copiada %s\n", cop);
		free(cop);
	}
	else
	{
		printf("error al duplicar la cadena. \n");
	}
	return(0);
}
*/