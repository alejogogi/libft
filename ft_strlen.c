/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:57:52 by alejagom          #+#    #+#             */
/*   Updated: 2024/10/03 17:13:05 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strlen(char *str)/*cuenta la cantidad de longitud del string*/
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char	a[20] = "hola ";

	int valor = ft_strlen(a);
	printf("longitud de la  string %u\n", valor);
	return(0);
}
*/