/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:39:16 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/07 18:53:25 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>/*borrar libreria*/
#include <string.h>/*borrar libreria*/
#include <stdlib.h>/*borrar libreria*/
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)/*reserva memoria como malloc solo que la incia todos los bites a 0*/
{
	void	*ptr;

	ptr = malloc(num *size);/*aca se reserva la memoria*/
	if (ptr == NULL)
	{
		return(NULL);
	}
	memset (ptr, 0, num * size);/*iniciamos la memoria a 0 con el memset cambio de valor*/
	return(ptr);/*se devuelve el puntero a la memoria ya cambiado*/
}

int	main(void)
{
	int *arr;
	int n = 5;
	
	arr = (int *)calloc(n, sizeof(int));
	if (arr == NULL)
	{
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
	}
    	printf("Valores iniciales:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	return (0);
}