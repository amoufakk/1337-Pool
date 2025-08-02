/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:56:54 by amoufakk          #+#    #+#             */
/*   Updated: 2025/07/24 19:07:40 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	put_hex(unsigned char c)
{
	const char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c < 32 || c > 126)
		{
			write(1, "\\", 1);
			put_hex(c);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
