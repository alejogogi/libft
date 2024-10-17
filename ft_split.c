/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 09:53:46 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/17 22:35:22 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>  //borrar libreria
#include <stdlib.h> //borrar libreria
#include <string.h> //borrar libreria

static int	ft_count_words(const char *str, int fin)
{
	unsigned int	cont;
	int				i;

	cont = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != fin && (i == 0 || str[i - 1] == fin))
		{
			cont++;
		}
		i++;
	}
	return (cont);
}

static void	*ft_counter_end(const char *s, char c)
{
	size_t	i;
	size_t	t;
	size_t	*sup;

	i = 0;
	t = 0;
	sup = malloc(((ft_count_words(s, c))) * sizeof(size_t));
	if(!sup)
	return(NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
		{
			sup[t] = i;
			t++;
		}
		i++;
	}
	return(sup);
}

static void	*free_memory(char **resultado, int i, size_t *aux_1, size_t *aux_2)
{
	while (i >= 0)
	{
		free(resultado[i]);
		i--;
	}
	free(resultado);
	free(aux_1);
	free(aux_2);
	return(NULL);
}

static size_t	*ft_counter_begin(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	*aux_1;

	i = 0;
	j = 0;
	aux_1 = malloc((ft_count_words(s, c)) * sizeof(size_t));
	if (!aux_1)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			aux_1[j] = i;
			j++;
		}
		i++;
	}
	return (aux_1);
}

static char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (start >= strlen(s))
	{
		return ((char *)malloc(1));
	}
	if (len > strlen(s) - start)
	{
		len = strlen(s) - start;
	}
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
	{
		return (NULL);
	}
	i = start;
	j = 0;
	while (j < len && s[i] != '\0')
	{
		substr[j++] = s[i++];
	}
	substr[j] = '\0';
	return (substr);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	size_t	*aux_1;
	size_t	*aux_2;
	int		n;
	
	if (!s)
	return(NULL);
	aux_1 = ft_counter_begin(s, c);
	if (!aux_1)
	return(NULL);
	aux_2 = ft_counter_end(s, c);
	if (!aux_2)
	return(free(aux_1), NULL);
	ptr = (char **)calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!ptr)
	return(free(aux_1), free(aux_2), NULL);
	n = 0;
	while (n < ft_count_words(s, c))
	{
		ptr[n] = ft_substr(s, aux_1[n], (aux_2[n] - aux_1[n] + 1));
		if (!ptr)
			return (free_memory(ptr, n, aux_1, aux_2));
			n++;
	}
	free(aux_1);
	free(aux_2);
	return(ptr);
}
/*
int main(void)
{
    const char *str = "hola,mundo,esto,es,una,prueba";
    char delimiter = ','; 
    char **resultado = ft_split(str, delimiter);
    
    if (!resultado)
    {
        printf("Error al dividir la cadena\n");
        return (1);
    }
    int i = 0;
    while (resultado[i] != NULL)
    {
        printf("Subcadena %d: %s\n", i, resultado[i]);
        i++;
    }
    i = 0;
    while (resultado[i] != NULL)
    {
        free(resultado[i]);
        i++;
    }
    free(resultado);
	return (0);
}
*/