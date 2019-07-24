# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 15:37:04 by kaokeefe          #+#    #+#              #
#    Updated: 2019/07/23 17:10:01 by kaokeefe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ftio.c op.c do_op.c

.PHONY: clean all

all:
	@gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	@rm -f $(NAME)
