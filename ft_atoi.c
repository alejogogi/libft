/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:54:19 by alejagom          #+#    #+#             */
/*   Updated: 2024/10/10 09:45:31 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>/*borrar librera*/
#include <unistd.h>/*borrar libreria*/
#include <string.h>/*borrar libreria*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sig;

	res = 0;
	sig = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n')
	{
		str++;
	}
	if (*str == '-')
	{
		sig = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sig);
}

/*
int	main(void)
{
	char	str[20];
	int		num;

	printf("Escribe un número en texto: ");
	scanf("%s", str);
	num = ft_atoi(str);
	printf("El número es: %d\n", num);
	return (0);
}
*/