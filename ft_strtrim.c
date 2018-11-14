/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:13:37 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/14 09:58:25 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_size(char *s)
{
	int i;
	int size;
	int space;

	i = 0;
	size = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	space = i;
	if (s[i] != '\0')
	{
		i = size - 1;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			i--;
			space++;
		}
	}
	return (size - space);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		size;
	char	*cpy;

	i = 0;
	j = 0;
	if (s == NULL)
		return (0);
	size = ft_size((char *)s);
	if (!(cpy = (char *)malloc(sizeof(*cpy) * size + 1)))
		return (0);
	if (cpy == NULL)
		return (0);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (j < size)
	{
		cpy[j] = s[i];
		j++;
		i++;
	}
	cpy[j] = '\0';
	return (cpy);
}
