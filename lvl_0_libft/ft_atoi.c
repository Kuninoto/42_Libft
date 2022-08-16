/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 23:47:01 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/08/16 01:01:48 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	final_int;
	int	signal;
	int	i;

	signal = 1;
	i = 1;
	if (str[0] == '-')
		signal = (signal * -1);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		final_int = ((final_int * 10) + (str[i] - '0'));
		if (final_int > 2147483647)
			return (-1);
		if (final_int < -2147483648)
			return (0);
		i++;
	}
	return ((final_int * signal));
}
// Pega numa string de numeros e transforma em int;