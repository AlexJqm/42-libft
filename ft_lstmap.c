/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:04:55 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/14 17:04:08 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*elem;

	if (lst == NULL || f == NULL)
		return (0);
	elem = f(lst);
	new = elem;
	lst = (*lst).next;
	while (lst)
	{
		(*new).next = f(lst);
		lst = (*lst).next;
		new = (*new).next;
	}
	(*new).next = NULL;
	return (elem);
}
