/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:53:31 by amoufakk          #+#    #+#             */
/*   Updated: 2025/07/27 18:37:05 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_neg(char *str, int *i)
{
	int	count;

	count = 0;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			count++;
		*i = *i + 1;
	}
	if (count % 2 != 0)
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = is_neg(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (sign * nb);
}
