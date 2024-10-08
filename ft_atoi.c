/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:54:19 by alejagom          #+#    #+#             */
/*   Updated: 2024/10/08 10:48:54 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	a;
	int	res;
	int	sig;

	a = 0;
	res = 0;
	sig = 1;
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n')
	{
		a++;
	}
	if (str[a] == '-')
	{
		sig = -1;
		a++;
	}
	else if (str[a] == '+')
	{
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		res = res * 10 + (str[a] - '0');
		a++;
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