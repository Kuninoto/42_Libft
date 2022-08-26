/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 01:10:01 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/08/26 23:49:13 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_nr_strs(char const *s, char c)
{
	size_t	i;
	size_t	nr_strs;

	nr_strs = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		nr_strs++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nr_strs);
}

char	**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			j;
	size_t			lines;
	unsigned int	nr_strs;
	char			**matrix;

	i = 0;
	j = 0;
	lines = 0;
	nr_strs = ft_nr_strs(s, c);
	matrix = malloc((nr_strs + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (lines < nr_strs)
	{	
		while (s[j++] == c)
			i++;
		while (s[j] != c)
			j++;
		matrix[lines] = ft_substr(s, i, ((j - 1) - i + 1));
		i = j + 1;
		j++;
		lines++;
	}
	matrix[lines] = NULL;
	return (matrix);
}

/* (j - 1) - i) = s_len; 
s_len = tamanho da string que se pretende criar atualmente */