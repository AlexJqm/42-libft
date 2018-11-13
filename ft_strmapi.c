/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:38:25 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/12 17:46:41 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tmp;

	i = 0;
	if (s != NULL)
	{
		if (!(tmp = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (0);
		while (s[i])
		{
			tmp[i] = f((unsigned int)i, s[i]);
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
	return (0);
}
