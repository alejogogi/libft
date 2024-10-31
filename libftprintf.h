/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:47:50 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/29 18:29:28 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
#include <unistd.h>
#include <stdio.h>

int	ft_printf(char const *, ...);
void	print_char(char c);
void	print_string(va_list args);

#endif // LIBFTPRINTF_H
