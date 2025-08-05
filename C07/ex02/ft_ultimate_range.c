/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgexter <dgexter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:41:17 by amoufakk          #+#    #+#             */
/*   Updated: 2025/08/05 08:22:15 by dgexter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
	{
		*range = 0;
		return (-1);
	}
	i = min;
	while (i < max)
	{
		(*range)[i - min] = i;
		i++;
	}
	return (max - min);
}

// #include<stdio.h>
// int main()
// {
// 	// int *t = 0;
// 	// int s =  ft_ultimate_range(&t, -1, -8);
// 	// printf("%d\n", s);
// 	// int i = 0;
// 	// while (i < s)
// 	// {
// 	// 	printf("%d\n", t[i]);
// 	// 	i++;
// 	// }
// }