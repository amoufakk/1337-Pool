/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:21:37 by amoufakk          #+#    #+#             */
/*   Updated: 2025/07/30 18:05:07 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	if (power < 0)
	{
		return (0);
	}
	p = 1;
	i = 0;
	while (i < power)
	{
		p *= nb;
		i++;
	}
	return (p);
}
