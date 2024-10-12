/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:30:17 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/12 18:47:37 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>  //borrar libreria
#include <stdlib.h> //borrar libreria
#include <string.h>//borrar librerias
//revisar codigo y evaluar manera de hacerlo diferente.
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	a = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!a)
		return (0);
	ft_strlcpy(a, s1 + start, end - start + 1);
	return (a);
}

int	main(void)
{
	char s1[] = " ----hola mundo!---";
	char set[] = " -";
	char *resultado;

	printf("cadena original: '%s'\n", s1);
	resultado = ft_strtrim(s1, set);
	if (resultado)
	{
		printf("cadena recortada: '%s'\n", resultado);
		free(resultado);
	}
	char s2[] = "***hola***";
	char set2[] = "*";

	printf("cadena original: '%s'\n", s2);
	resultado = ft_strtrim(s2, set2);
	if (resultado)
	{
		printf("cadena recortada: '%s'\n", resultado);
		free(resultado);
	}
	return (0);
}
