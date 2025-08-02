/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:13:28 by amoufakk          #+#    #+#             */
/*   Updated: 2025/08/02 13:36:18 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		range[i - min] = i;
		i++;
	}
	return (range);
}

// #include<stdio.h>
// int main()
// {
// 	char *src = "hello world";
// 	char *dup = ft_strdup(src);
// 	printf("%s\n", dup);
// 	free(dup);
// 	int *t = ft_range(-1, 6);
// 	int i = 0;
// 	while (i < 8)
// 	{
// 		printf("%d\n", t[i]);
// 		i++;
// 	}
// }