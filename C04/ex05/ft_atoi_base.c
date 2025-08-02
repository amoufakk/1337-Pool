/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:32:43 by amoufakk          #+#    #+#             */
/*   Updated: 2025/07/30 15:01:37 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (sign * nb);
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

int	is_valid_base(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' ||
			str[i] <= 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int ft_atoi_base(char *str, char *base)
{
	long	nbr;

	nbr = ft_atoi(str);
	if (ft_strlen(base) < 2)
		return (0);
	if (is_dub(base))
		return 0;
	if (!is_valid_base(base))
		return 0;
	if (nbr < 0)
	{
		nbr *= -1;
	}
	if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
	}
	ft_putchar(base[nbr % ft_strlen(base)]);
}