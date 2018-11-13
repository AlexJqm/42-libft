/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:34:45 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/07 16:44:09 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		length;

	length = ft_strlen(s);
	if (!(cpy = (char *)malloc(sizeof(char) * length + 1)))
		return (0);
	length = 0;
	while (s[length])
	{
		cpy[length] = s[length];
		length++;
	}
	cpy[length] = '\0';
	return (cpy);
}
