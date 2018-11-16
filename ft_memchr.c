/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:05:43 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/16 14:42:27 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*cpy;
	size_t			i;

	cpy = (char *)s;
	i = 0;
	while (i < n)
	{
		if (cpy[i] == (char)c)
			return ((void *)&cpy[i]);
		i++;
	}
	return (0);
}
