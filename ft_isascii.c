/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:54:57 by alejagom          #+#    #+#             */
/*   Updated: 2024/10/03 16:48:38 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
int	main(void)
{
	char	i ='*';

	if (ft_isascii(i))
	{
		printf("el caracter %c alfanumerico. \n", i);
	}
	else
	{
		printf("el caracter %c no es alfanumerico. \n", i);
	}
	return(0);
}
*/