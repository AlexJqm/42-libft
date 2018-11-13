/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:10:13 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/12 12:58:54 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (s2[k] == '\0')
		return ((char *)s1);
	while (s1[k] != '\0')
	{
		i = k;
		j = 0;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char *)s1 + i - j);
		}
		k++;
	}
	return (0);
}
