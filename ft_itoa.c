/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:08:01 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/14 09:54:59 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_checksign(int *n, int *neg)
{
	if (*n < 0)
	{
		*neg = 1;
		*n = -*n;
	}
}

char		*ft_itoa(int n)
{
	char	*s;
	int		neg;
	int		size;
	int		cpy;

	neg = 0;
	size = 1;
	cpy = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_checksign(&n, &neg);
	while (cpy /= 10)
		size++;
	if (!(s = ft_strnew(size += neg)))
		return (0);
	while (size--)
	{
		s[size] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}
