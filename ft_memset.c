/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:01:11 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/16 14:48:01 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char	*cpy;

	cpy = (char *)ptr;
	i = 0;
	while (i < num)
	{
		cpy[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
