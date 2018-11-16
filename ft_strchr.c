/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:12:47 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/16 16:07:20 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int size;

	if (!s && c > 255)
		return (0);
	size = 0;
	while (s[size] != '\0')
	{
		if (s[size] == (char)c)
			return ((char *)s + size);
		size++;
	}
	if (c == '\0')
		return ((char *)&s[size]);
	return (0);
}
