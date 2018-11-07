/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:21:18 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/07 16:20:58 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove (void *dest, const void *src, size_t n)
{
 const char *tmp_src;
 char *tmp_dest;
 unsigned int i;

 tmp_src = (char *)src;
 tmp_dest = (char *)dest;
 i = 0;
 if (tmp_src > tmp_dest)
 {
  while (i < n)
  {
   tmp_dest[i] = tmp_src[i];
   i++;
  }
 }
 else
 {
  i = n - 1;
  while ((int)i >= 0)
  {
   tmp_dest[i] = tmp_src[i];
   i--;
  }
 }
 return ((void *)dest);
}
