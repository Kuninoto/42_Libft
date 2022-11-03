/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <nnuno-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:02:49 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/11/02 21:30:19 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_strlen_delim(char const *str, char delim)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != delim)
		i++;
	return (i);
}

static size_t	ft_nr_strs(char const *s, char c)
{
	size_t	i;
	size_t	n;
	size_t	len;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = ft_strlen_delim(&s[i], c);
		i += len;
		if (len > 0)
			n++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**matrix;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	matrix = malloc((ft_nr_strs(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = ft_strlen_delim(&s[i], c);
		if (len > 0)
			matrix[j] = ft_substr(s, i, len);
		i += len;
		j++;
	}
	matrix[j] = NULL;
	return (matrix);
}
