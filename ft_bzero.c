/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:54:08 by alejagom          #+#    #+#             */
/*   Updated: 2024/09/29 17:30:15 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> /*borrar libreria*/

void	ft_bzero(void *s, size_t n)
{
	size_t	c;
	unsigned char	*ptr;

	(unsigned char *)ptr;
	c = 0;
	ptr = (unsigned char *)s;
	while (c < n)
	{
		ptr[c] = 0;
		c++;
	}
}

int	main(void)
{
	char	*pru;

	pru[20] = "buenas";
	printf("primero: %s\n", pru);
	ft_bzero(pru, 4);
	printf("segundo %s\n", pru);
	if (pru[0] == '\0' && pru[1] == '\0')
	{
		printf("caracteres /0\n");
	}
	return (0);
}
