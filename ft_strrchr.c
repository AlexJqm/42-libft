/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:48:17 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/16 16:07:22 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *find;

	if (!s && c > 255)
		return (0);
	find = (char *)s + ft_strlen(s);
	while (*find != c)
	{
		if (find == s)
			return (0);
		find--;
	}
	return (find);
}
