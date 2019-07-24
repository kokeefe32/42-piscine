# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 08:45:21 by kaokeefe          #+#    #+#              #
#    Updated: 2019/07/23 17:21:13 by kaokeefe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c \
		   ./srcs/ft_strcmp.c ./srcs/ft_swap.c

OFLS = ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o

INCLUDES = ./includes/

all: compile

compile:
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(INCLUDES)
	@ar -rc $(NAME) $(OFLS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OFLS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
