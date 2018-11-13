/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:48:47 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/12 19:56:32 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_detect(char *s, char c)
{
	int i;
	int sp;

	i = 0;
	sp = 0;
	while (s[i])
	{
		if (s[i] == c)
			sp++;
		i++;
	}
	return (sp);
}

char	**ft_strsplit(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
}
