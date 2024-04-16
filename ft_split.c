/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyherrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:18:14 by nyherrer          #+#    #+#             */
/*   Updated: 2024/04/16 15:18:14 by nyherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_free(char **result)
{
	int	i;
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static	size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words_amount;
	i = 0;
	words_amount = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words_amount++;
		i++;
	}
	return (words_amount);
}

static	char	**ft_write_result(char const *s, char c, char	**result)
{
	size_t	start;
	size_t	i;
	size_t	word;
	start = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[word] = ft_substr(s, start, i - start + 1);
			if (!result[word])
			{
				ft_free(result);
				return (0);
			}
			word++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	result[word] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	if (!s)
		return (0);
	result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (0);
	result = ft_write_result(s, c, result);
	return (result);
}