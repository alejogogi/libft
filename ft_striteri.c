/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:57:33 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/17 23:08:46 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//borrar libreria 
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void ft_striteri(char *s, void (*f)(unsigned int, char*));

void modificar_caracter(unsigned int i, char *c)
{
	if (i % 2 == 1 && *c >= 'a' && *c <= 'z')
        *c -= 32;
}

int main(void)
{
    char cadena[] = "programando en c";
	ft_striteri(cadena, modificar_caracter);
    printf("Cadena modificada: %s\n", cadena);
	return 0;
}
*/