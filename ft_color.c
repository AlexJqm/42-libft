/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:00:16 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/16 12:55:26 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_color(char *str, char *color)
{
	if (!str || !color)
		return ;
	ft_putstr("\033[");
	if (ft_strcmp(color, "black"))
		color = "30";
	else if (ft_strcmp(color, "red"))
		color = "31";
	else if (ft_strcmp(color, "green"))
		color = "32";
	else if (ft_strcmp(color, "yellow"))
		color = "33";
	else if (ft_strcmp(color, "blue"))
		color = "34";
	else if (ft_strcmp(color, "white"))
		color = "37";
	else
		return ;
	ft_putstr(color);
	ft_putchar('m');
	ft_putstr(str);
	ft_putstr("\033[0m");
}
