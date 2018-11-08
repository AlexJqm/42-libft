/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:48:17 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/08 14:32:44 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr (const char *s, int c)
{
 int size;
 int find;

 size = 0;
 find = 0;
 while (s[size] != '\0')
 {
  if (s[size] == (char)c)
   find = size;
  size++;
 }
 if (s[size] == '\0' && find != 0)
  return ((char *)s + find);
 if (c == '\0')
  return ((char *)s + size);
 return (0);
}
