/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:51:43 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/13 17:01:47 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *s;

	if (!(s = (t_list*)malloc(sizeof(t_list))))
		return (0);
	if (content)
	{
		if (!((*s).content = (void*)malloc(content_size)))
			return (0);
		ft_memcpy((*s).content, content, content_size);
		(*s).content_size = content_size;
	}
	else
	{
		(*s).content = 0;
		(*s).content_size = 0;
	}
	(*s).next = 0;
	return (s);
}
