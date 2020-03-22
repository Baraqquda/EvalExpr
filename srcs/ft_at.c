/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_at.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 03:56:15 by gselyse           #+#    #+#             */
/*   Updated: 2020/03/15 17:26:57 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_at(char *str)
{
	int nb;
	int kkk;

	nb = 0;
	kkk = 1;
	ft_var(str);
	if (str[g_i] == '+' || str[g_i] == '-')
	{
		if (str[g_i] == '-')
			kkk = -1;
		(g_i)++;
	}
	if (str[g_i] == '(')
	{
		g_i++;
		ft_var(str);
		nb = eval_expr(str);
		if (str[g_i] == ')')
			g_i++;
		ft_var(str);
		return (nb * kkk);
	}
    while (ft_ver(str[g_i]))
		nb = nb * 10 + str[g_i++] - 48;
	return (nb * kkk);
}
