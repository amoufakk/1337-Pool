/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:55:38 by amoufakk          #+#    #+#             */
/*   Updated: 2025/07/24 14:26:39 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int	is_alphanumeric(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_str_tolower(str);
	if (str[0] && is_alpha(str[0]))
		str[0] -= 32;
	i = 0;
	while (str[i])
	{
		if (!is_alphanumeric(str[i]) && is_alpha(str[i + 1]))
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
