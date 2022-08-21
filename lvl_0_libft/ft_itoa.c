/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:47:05 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/08/21 17:33:16 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
		digits++;
	while (n != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	size_t	digits;
	size_t	digits_index;
	int		signal;
	char	*result;

	digits = ft_digits(n);
	digits_index = digits - 1;
	signal = 1;
	result = malloc((digits + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[digits] = '\0';
	if (n < 0)
		signal = -1;
	while (n != 0)
	{
		result[digits_index] = (n % 10 * signal) + '0';
		n = n / 10;
		digits_index--;
	}
	if (signal == -1)
		result[digits_index] = '-';
	return (result);
}
