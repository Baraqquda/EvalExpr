/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 16:52:29 by gselyse           #+#    #+#             */
/*   Updated: 2020/03/15 16:39:12 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

int		g_i;
int		ft_expr(char *str);
int		ft_ver(char c);
int		ft_calc(int a, int b, char c);
int		eval_expr(char *str);
int		ft_at(char *str);
void	ft_var(char *str);
void    ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_check(char c);
int     ft_tryo(char c);

#endif
