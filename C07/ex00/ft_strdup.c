/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgexter <dgexter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:53:11 by amoufakk          #+#    #+#             */
/*   Updated: 2025/08/05 08:22:15 by dgexter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(src);
	dup = (char *)malloc(len + 1);
	if (dup == 0)
	{
		return (0);
	}
	dup[len] = '\0';
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
// #include<stdio.h>
// int main()
// {
// 	char *src = "hello world";
// 	char *dup = ft_strdup(src);
// 	printf("%s\n", dup);
// 	free(dup);
// }