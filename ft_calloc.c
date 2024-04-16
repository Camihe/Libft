/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyherrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:03:22 by nyherrer          #+#    #+#             */
/*   Updated: 2024/04/16 15:03:22 by nyherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*call;
	size_t	i;
	call = malloc(count * size);
	if (!call)
		return (0);
	i = -1;
	while (++i < size * count)
		call[i] = 0;
	return (call);
}