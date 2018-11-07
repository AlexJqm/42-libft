/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:24:35 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/07 16:36:34 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void *ft_memset (void *ptr, int value, size_t num);
void ft_bzero (void *s, size_t n);
void *ft_memcpy (void *dest, const void *src, size_t n);
void *ft_memccpy (void *dest, const void *src, int c, size_t n);
void *ft_memmove (void *dest, const void *src, size_t n);
void *ft_memchr (const void *s, int c, size_t n);
int ft_memcmp (const void *s1, const void *s2, size_t n);
size_t ft_strlen (const char *str);
char *ft_strdup (const char *s);

#endif
