/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:49:51 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/07 16:34:00 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy (void *dest, const void *src, int c, size_t n)
{
 unsigned const char *cpy_src;
 unsigned char *cpy_dest;
 unsigned int i;

 cpy_src = (unsigned char *)src;
 cpy_dest = (unsigned char *)dest;
 i = 0;
 while (i < n)
 {
  cpy_dest[i] = cpy_src[i];
  if (cpy_src[i] == (unsigned char)c)
   return (dest + i + 1);
  i++;
 }
 return (0);
}
