/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:36:48 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/08/14 17:43:33 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char	*conv_ptr;
	size_t	i;

	conv_ptr = (char *)ptr;
	i = 0;
	while (i < n)
	{
		*(conv_ptr + i) = x;
		i++;
	}
	return (ptr);
}
