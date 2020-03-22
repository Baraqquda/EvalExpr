/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 08:22:56 by gselyse           #+#    #+#             */
/*   Updated: 2020/03/15 16:03:12 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_expr(char *str)
{
	char	c;
	int		arg1;
	int		arg2;

	arg1 = ft_at(str);
	ft_var(str);
	while (str[g_i] == '*' || str[g_i] == '/' || str[g_i] == '%')
	{
		c = str[g_i];
		g_i++;
		ft_var(str);
		arg2 = ft_at(str);
		arg1 = ft_calc(arg1, arg2, c);
	}
	return (arg1);
}
