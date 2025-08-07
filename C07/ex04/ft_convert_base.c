/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgexter <dgexter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:38:38 by dgexter           #+#    #+#             */
/*   Updated: 2025/08/06 20:28:51 by dgexter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid_base(char *base);
int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *base);

int	count_digits(long number, int base_length)
{
	int	count;

	count = 0;
	if (number < 0)
	{
		count++;
	}
	while (number != 0)
	{
		number /= base_length;
		count++;
	}
	return (count);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	int		len;
	char	*result;

	number = ft_atoi_base(nbr, base_from);
	if (number == 0)
		return (0);
	if (!is_valid_base(base_to))
		return (0);
	len = count_digits(number, ft_strlen(base_to));
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	result[len] = '\0';
	if (number < 0)
	{
		number *= -1;
		result[0] = '-';
	}
	while (number != 0)
	{
		result[--len] = base_to[number % ft_strlen(base_to)];
		number /= ft_strlen(base_to);
	}
	return (result);
}
