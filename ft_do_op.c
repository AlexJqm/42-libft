/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:45:39 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/14 16:48:05 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_do_op(int nbr1, int nbr2, char op)
{
	if (op == '+')
		return (nbr1 + nbr2);
	else if (op == '-')
		return (nbr1 - nbr2);
	else if (op == '*')
		return (nbr1 * nbr2);
	else if (op == '/')
		return (nbr1 / nbr2);
	else if (op == '%')
		return (nbr1 % nbr2);
	return (0);
}
