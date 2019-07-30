# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 09:49:19 by kaokeefe          #+#    #+#              #
#    Updated: 2019/07/28 13:57:50 by kaokeefe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = ./src/*.c

all:
	@gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
