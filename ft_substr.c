/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:36:42 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/21 01:52:50 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (start >= ft_strlen(s))
	{
		return ((char *)malloc(1));
	}
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
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
		substr[j++] = s[i++];
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