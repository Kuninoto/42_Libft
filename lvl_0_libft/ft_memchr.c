/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:33:27 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/08/14 23:50:57 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*conv_str;
	size_t	i;

	conv_str = (unsigned char *)str;
	i = 0;
	while (conv_str[i] != '\0' && i < n)
	{
		if (conv_str[i] == (unsigned char)c)
			return (conv_str + i);
	}
	return (NULL);
}
