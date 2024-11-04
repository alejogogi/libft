/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:47:50 by alejogogi         #+#    #+#             */
/*   Updated: 2024/11/04 10:13:52 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>

int	ft_printf(char const *, ...);
void	print_char(char c);
void	print_string(va_list args);
void	print_hex(unsigned long num);
void    print_int(int n);

#endif // LIBFTPRINTF_H
