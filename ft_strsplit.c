/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:48:47 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/14 09:57:59 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *s, char c)
{
	int i;
	int nb_words;

	i = 0;
	nb_words = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			nb_words++;
			i++;
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (nb_words);
}

static int	ft_strlenbis(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	if (s == NULL)
		return (0);
	if (!(tab = (char**)malloc(sizeof(char*)
	* (ft_count_words((char *)s, c) + 1))))
		return (0);
	while (s[i] != '\0')
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		y = 0;
		tab[x] = (char*)malloc(sizeof(char) *
		(ft_strlenbis((char *)s + i, c) + 1));
		while (s[i] != '\0' && s[i] != c)
			tab[x][y++] = s[i++];
		tab[x++][y] = '\0';
	}
	tab[ft_count_words((char *)s, c)] = 0;
	return (tab);
}
