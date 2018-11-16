/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:04:55 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/16 13:37:33 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*cpy;

	if (!lst || !f)
		return (0);
	if (!(cpy = f(ft_lstnew((*lst).content, (*lst).content_size))))
		return (0);
	new = cpy;
	lst = (*lst).next;
	while (lst)
	{
		if (!((*new).next = f(ft_lstnew((*lst).content, (*lst).content_size))))
			return (0);
		lst = (*lst).next;
		new = (*new).next;
	}
	(*new).next = NULL;
	return (cpy);
}
