/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:21:18 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/16 14:26:58 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((unsigned char *)dest >= (unsigned char *)src)
		while (n)
		{
			*((unsigned char *)dest + n - 1) = *((unsigned char *)src + n - 1);
			n--;
		}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
