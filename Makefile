# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gselyse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 05:21:31 by gselyse           #+#    #+#              #
#    Updated: 2020/03/15 18:51:08 by gselyse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRCS = ./main.c ./ft_at.c ./ft_calc.c ./ft_check.c ./ft_expr.c \
	   ./ft_putchar.c ./ft_putnbr.c ./ft_var.c  ./eval_expr.c 
FLAGS = -Wall -Wextra -Werror

.PHONY: ALL clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f *.o $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all 
