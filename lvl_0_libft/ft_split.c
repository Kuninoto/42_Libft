/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 01:10:01 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/08/25 23:35:02 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	ft_nr_strs(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	nr_strs;

	i = 0;
	j = 0;
	nr_strs = 0;
	while (s[i])
	{
		while (s[j] != c && s[j])
			j++;
		nr_strs++;
		j++;
		i = j;
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
	matrix = malloc(nr_strs * sizeof(char *) + sizeof(NULL));
	if (!matrix)
		return (NULL);
	while (lines < nr_strs)
	{
		while (s[j] != c)
			j++;
		matrix[lines] = ft_substr(s, i, (j - i - 1) + 1);
		j++;
		i = j;
		lines++;
	}
	matrix[lines] = NULL;
	int	tumae;
	for (tumae = 0; tumae <= 5; tumae++)
		if (matrix[tumae] == NULL)
			printf("(null)\n");
		else
			printf("%s\n", matrix[tumae]);
	return (matrix);
}

/* j - i = s_len; s_len = tamanho da string que se pretende criar atualmente */