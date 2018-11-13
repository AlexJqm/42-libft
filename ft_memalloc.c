/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:29:40 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/12 16:43:15 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	if (size == 0)
		return (0);
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	ft_bzero(str, size);
	return (str);
}
