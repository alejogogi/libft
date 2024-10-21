/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 09:53:46 by alejogogi         #+#    #+#             */
/*   Updated: 2024/10/21 05:49:33 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (!sup)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
		{
			sup[t] = i;
			t++;
		}
		i++;
	}
	return (sup);
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
	return (NULL);
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

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	size_t	*aux_b;
	size_t	*aux_e;
	size_t	n;

	if (!s)
		return (NULL);
	aux_b = ft_counter_begin(s, c);
	if (!aux_b)
		return (NULL);
	aux_e = ft_counter_end(s, c);
	if (!aux_e)
		return (free(aux_b), NULL);
	ptr = (char **)ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!ptr)
		return (free(aux_b), free(aux_e), NULL);
	n = -1;
	while (++n < ft_count_words(s, c))
	{
		*(ptr + n) = ft_substr(s, aux_b[n], (aux_e[n] - aux_b[n] + 1));
		if (!*(ptr + n))
			return (ft_free(ptr, n, aux_b, aux_e));
	}
	return (free(aux_b), free(aux_e), ptr);
}

/*
int	main(void)
{
	const char	*str = "hola,mundo,esto,es,una,prueba";
	char		delimiter;
	char		**resultado;
	int			i;

	delimiter = ',';
	resultado = ft_split(str, delimiter);
	if (!resultado)
	{
		printf("Error al dividir la cadena\n");
		return (1);
	}
	i = 0;
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