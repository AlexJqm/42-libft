/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:43:48 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/08 10:54:57 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy (char *dest, const char *src, size_t n)
{
 unsigned int i;

 i = 0;
 while (src[i] != '\0' && i < n)
 {
  dest[i] = src[i];
  i++;
 }
 while (i < n)
 {
  dest[i] = '\0';
  i++;
 }
 return (dest);
}
