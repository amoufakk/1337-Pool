/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:26:03 by amoufakk          #+#    #+#             */
/*   Updated: 2025/07/19 16:12:42 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_not_upper;
	int	is_not_lower;

	i = 0;
	while (str[i])
	{
		is_not_upper = !(str[i] <= 'Z' && str[i] >= 'A');
		is_not_lower = !(str[i] <= 'z' && str[i] >= 'a');
		if (is_not_lower && is_not_upper)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
