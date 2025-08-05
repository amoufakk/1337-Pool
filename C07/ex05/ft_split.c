/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgexter <dgexter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 23:32:58 by dgexter           #+#    #+#             */
/*   Updated: 2025/08/06 00:19:05 by dgexter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str)
			count++;
		while (*str && !ft_strchr(charset, *str))
			str++;
	}
	return (count);
}

char	*copy_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !ft_strchr(charset, str[i]))
		i++;
	word = (char *)malloc(i + 1);
	if (!word)
		return (0);
	word[i] = '\0';
	i = 0;
	while (str[i] && !ft_strchr(charset, str[i]))
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	char	**result;
	char	**tmp;

	len = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (0);
	result[len] = 0;
	tmp = result;
	while (*str)
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str)
		{
			*tmp = copy_word(str, charset);
			tmp++;
		}
		while (*str && !ft_strchr(charset, *str))
			str++;
	}
	return (result);
}
