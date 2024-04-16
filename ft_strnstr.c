/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyherrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:25:53 by nyherrer          #+#    #+#             */
/*   Updated: 2024/04/15 21:25:53 by nyherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;
	size_t	needle_len;
	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	needle_len = ft_strlen(needle);
	while (haystack[i] && (i + needle_len - 1) < len)
	{
		i2 = 0;
		while (needle[i2] && haystack[i + i2] == needle[i2])
		{
			if (i2 == needle_len - 1)
				return ((char *)(haystack + i));
			i2++;
		}
		i++;
	}
	return (0);
}