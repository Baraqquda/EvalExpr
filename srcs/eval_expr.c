/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:15:19 by gselyse           #+#    #+#             */
/*   Updated: 2020/03/15 17:59:59 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			eval_expr(char *str)
{
	int		arg1;
	int		arg2;
    char    c;

	ft_var(str);
	arg1 = ft_at(str);
    ft_var(str);
	while (str[g_i] && str[g_i] != ')')
	{
		ft_var(str);
		c = str[g_i];
		g_i++;
		ft_var(str);
		if (c == '+' || c == '-')
			arg2 = ft_expr(str);
		else
			arg2 = ft_at(str);
		arg1 = ft_calc(arg1, arg2, c);
	}
	return (arg1);
}
