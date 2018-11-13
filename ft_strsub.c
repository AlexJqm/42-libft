/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:02:07 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/12 18:46:24 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*cpy;
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		if (!(cpy = (char*)malloc(sizeof(char) * len + 1)))
			return (0);
		while (s[start] && i < len)
		{
			cpy[i] = s[start];
			i++;
			start++;
		}
		cpy[i] = '\0';
		return (cpy);
	}
	return (0);
}
