/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:44:09 by alejogogi         #+#    #+#             */
/*   Updated: 2024/11/04 18:31:06 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_string(char *s)
{
    int cont = 0;

    if (!s)
    {
        s = "null";
    }
	while (s[cont])
    {
        write(1, &s[cont], 1);
        cont++;
    }
    return cont;
}

int main(void)
{
    char *mes = "hello world";
    int length = print_string(mes);
    write(1, "\n", 1);
	return 0;
}