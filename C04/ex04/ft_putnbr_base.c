/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:56:29 by amoufakk          #+#    #+#             */
/*   Updated: 2025/07/27 18:53:13 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	is_dub(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	is_base(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == 32
			|| (str[i] >= 9 && str[i] <= 13))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = (long)nbr;
	if (ft_strlen(base) < 2)
		return ;
	if (is_dub(base))
		return ;
	if (!is_base(base))
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= ft_strlen(base))
	{
		ft_putnbr_base(n / ft_strlen(base), base);
	}
	ft_putchar(base[n % ft_strlen(base)]);
}
