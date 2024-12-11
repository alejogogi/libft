/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:47:50 by alejogogi         #+#    #+#             */
/*   Updated: 2024/11/25 20:34:56 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>

int		ft_printf(char const *, ...);
void	ft_print_char(char c);
int		ft_print_string(char *s);
void	ft_print_hex(unsigned long num);

#endif // LIBFTPRINTF_H
