/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:54:19 by alejagom          #+#    #+#             */
/*   Updated: 2024/10/07 09:36:26 by alejogogi        ###   ########.fr       */
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
		res = res * 10 + (str[a] - '0');/*se multiplica para que el siguiente numero sea correcto*/
		a++;/*ejemplo si no se multiplica queda 1 + 3 = 4 y debe quedar 1 * 10 + 3 = 13 yo lo entinedo*/
	}
	return (res * sig);
}

/*
int	main(void)
{
	char str[20];
	int num;

	printf("Escribe un número en texto: ");
	scanf("%s", str);
	num = ft_atoi(str); 
	printf("El número es: %d\n", num);

	return (0);
}
*/