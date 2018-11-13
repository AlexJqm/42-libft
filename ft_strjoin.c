/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:12:43 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/12 18:56:46 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		j;

	j = -1;
	i = -1;
	if (s1 && s2)
	{
		if (!(tmp = (char *)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2)) + 1)))
			return (0);
		while (s1[++i])
			tmp[i] = s1[i];
		j = i;
		i = -1;
		while (s2[++i])
		{
			tmp[j] = s2[i];
			j++;
		}
		tmp[j] = '\0';
		return (tmp);
	}
	return (0);
}
