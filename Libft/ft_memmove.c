/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:30:57 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/08/14 18:48:06 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*conv_dest;
	const char	*conv_src;
	size_t		i;

	conv_dest = (char *)dest;
	conv_src = (const char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*(conv_dest + i) = *(conv_src + i);
		i++;
	}
	return (dest);
}
