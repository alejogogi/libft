/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 09:53:46 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/15 00:55:39 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>  //borrar libreria
#include <stdlib.h> //borrar libreria
#include <string.h> //borrar libreria

static int	ft_count_words(const char *str, char fin)
{
	int	cont;
	int	words;

	cont = 0;
	words = 0;
	while (*str)
	{
		if (*str != fin && !words)
		{
			words = 1;
			cont++;
		}
		else if (*str == fin)
		{
			words = 0;
		}
		str++;
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
	sup = malloc((ft_count_words(s, c)) * sizeof(size_t));
	if (!sup)
	return(NULL);
	while (s[i])
	{
		if(s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
		sup[t++] = i;
		i++;
	}
	return(sup);
}

static void	free_memory(char **resultado, int palabras)
{
	int	i;

	i = 0;
	while (i < palabras)
	{
		free(resultado[i]);
		i++;
	}
	free(resultado);
}

char	**ft_split(const char *s, char c)
{
	int		words;
	char		**resultado;
	int		strt;
	int		in;
	int		i;
	int		end;
	int		len;
	int		j;

	i = 0;
	strt = -1;
	in = 0;
	words = count_words(s, c);
	resultado = (char **)malloc((words + 1) * sizeof(char *));
	if (!resultado)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && strt == -1)
		{
			strt = i;
		}
		else if ((s[i] == c || s[i + 1] == '\0') && strt != -1)
		{
			if (s[i] == c)
			{
				end = i;
			}
			else 
			{
				end = i + 1;
			}
			len = end - strt;
			resultado[in] = (char *)malloc((len + 1) * sizeof(char));
			if (!resultado[in])
			{
				free_memory(resultado, in);
				return (NULL);
			}
			j = 0;
			while (j < len)
			{
				resultado[in][j] = s[strt + j];
				j++;
			}
			resultado[in][len] = '\0';
			in++;
			strt = -1;
		}
		i++;
	}
	resultado[in] = NULL;
	return (resultado);
}

int	main(void)
{
	char **resultado = ft_split("hola, mundo, de cuarenta y dos", ',');

	int i = 0;
	while (resultado[i])
	{
		printf("subcadena %d: %s\n", i, resultado[i]);
		free(resultado[i]);
		i++;
	}
	free(resultado);
	return (0);
}

