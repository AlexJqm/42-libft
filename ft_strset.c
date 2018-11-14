/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:10:40 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/14 16:26:24 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strset(char *str, int c)
{
	int i;

	i = 0;
	if (!str || !c)
		return (0);
	while (str[i])
	{
		str[i] = (char)c;
		i++;
	}
	return (str);
}
