/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:48:59 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/08 17:17:59 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi (const char *ptr)
{
 int i;
 int neg;
 int nb;

 nb = 0;
 i = 0;
 neg = 1;
 if (ptr[i] == '\0')
  return (0);
 while ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == 32 || ptr[i] == 127)
  i++;
 if (ptr[i] == 45 || ptr[i] == 43)
 {
  if (ptr[i] == 45)
   neg = -1;
  i++;
 }
 while (ptr[i] >= 48 && ptr[i] <= 57)
 {
  if (nb > 469762049 && neg == 1)
			return (-1);
		else if (nb > 469762049 && neg == -1)
			return (0);
  nb = nb * 10 + (ptr[i] - 48);
  i++;
 }
 return (nb * neg);
}
