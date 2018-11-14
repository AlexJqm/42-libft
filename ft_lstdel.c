/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:52:58 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/14 12:10:39 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *cpy;
	t_list *tmp;

	if (alst == NULL)
		return ;
	cpy = *alst;
	while (cpy != NULL)
	{
		tmp = (*cpy).next;
		ft_lstdelone(&cpy, del);
		cpy = tmp;
	}
	*alst = NULL;
}
