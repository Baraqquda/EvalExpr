/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 16:10:21 by gselyse           #+#    #+#             */
/*   Updated: 2020/03/15 14:27:40 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_calc(int a, int b, char c)
{
	if (c == '-')
		return (a - b);
	else if (c == '/')
		return (a / b);
	else if (c == '+')
		return (a + b);
	else if (c == '*')
		return (a * b);
	else if (c == '%')
		return (a % b);
	return (0);
}
