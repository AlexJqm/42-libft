/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:36:10 by aljacque          #+#    #+#             */
/*   Updated: 2018/11/13 11:36:38 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		a;
	int		count;
	char	tmp;

	a = 0;
	while (str[a] != '\0')
		a++;
	a--;
	count = 0;
	while (count < a)
	{
		tmp = str[a];
		str[a] = str[count];
		str[count] = tmp;
		count++;
		a--;
	}
	return (str);
}
