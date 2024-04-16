/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyherrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:23:58 by nyherrer          #+#    #+#             */
/*   Updated: 2024/04/15 21:23:58 by nyherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char const	*data;
	i = 0;
	data = (unsigned char const *)s;
	while (i < n)
	{
		if (data[i] == (unsigned char)c)
			return ((void *)(data + i));
		i++;
	}
	return (0);
}