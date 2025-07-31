/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 23:48:09 by amoufakk          #+#    #+#             */
/*   Updated: 2025/07/31 07:32:05 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	bubble_sort(int size, char **s)
{
	int		i;
	int		j;
	char	*tmp;

	i = size - 1;
	while (i > 1)
	{
		j = 1;
		while (j < i)
		{
			if (ft_strcmp(s[j], s[j + 1]) > 0)
			{
				tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
			j++;
		}
		i--;
	}
}

int	main(int c, char **arv)
{
	int	i;
	int	j;

	bubble_sort(c, arv);
	i = 1;
	while (arv[i])
	{
		j = 0;
		while (arv[i][j])
		{
			write(1, &arv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
