/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:36:42 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/08 18:45:31 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> /*borrar libreria*/
#include <stdlib.h>/*borrar libreria*/
#include <string.h>/*borrar libreria*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;
	size_t	str_len;

	str_len = strlen(s);
	if (start >= str_len)
	{
		return ((char *)malloc(1));
	}
	if (len > str_len - start)
	{
		len = str_len - start;
	}
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
	{
		return (NULL);
	}
	i = start;
	j = 0;
	while (j < len && s[i] != '\0')
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
/*
int	main(void)
{
	char *cadena_original = "hola mundo";
	size_t start = 5;
	size_t len = 6;
	char *resultado = ft_substr(cadena_original, start, len);

	if (resultado != NULL)
	{
		printf("subcadena: %s\n", resultado);
		free(resultado);
	}
	else
	{
		printf("error al crear la subcadena. \n");
	}
	return (0);
}
*/