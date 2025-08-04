/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoufakk <amoufakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:55:39 by amoufakk          #+#    #+#             */
/*   Updated: 2025/08/04 12:58:24 by amoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_total_len(char **strs, int size, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total += ft_strlen(sep) * (size - 1);
	return (total);
}

void	ft_fill(char *dest, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				dest[k++] = sep[j++];
		}
		i++;
	}
	dest[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		total;

	if (size == 0)
	{
		dest = (char *)malloc(1);
		if (!dest)
			return (0);
		dest[0] = '\0';
		return (dest);
	}
	total = ft_total_len(strs, size, sep);
	dest = (char *)malloc(total + 1);
	if (!dest)
		return (0);
	ft_fill(dest, strs, sep, size);
	return (dest);
}

// #include<stdio.h>
// int main()
// {
// 	char *strs[] = {"hellow"};
// 	char *s = ft_strjoin(0, strs, " wa wa33 ");
// 	printf("%s\n", s);
// 	free(s);
// }