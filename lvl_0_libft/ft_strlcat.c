/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:07:10 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/08/23 15:10:25 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	j_dest;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	j_dest = len_dest;
	i = 0;
	if (size == 0)
		return (len_src);
	if (size < len_dest)
		return (len_src + size);
	while (src[i] != '\0' && j_dest < (size - 1))
	{
		dest[j_dest] = src[i];
		j_dest++;
		i++;
	}
	dest[j_dest] = '\0';
	return (len_dest + len_src);
}
