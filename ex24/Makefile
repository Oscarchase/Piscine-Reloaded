# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochase <ochase@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/09 20:01:22 by ochase            #+#    #+#              #
#    Updated: 2017/02/01 22:18:27 by ochase           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC_DIR		=	srcs
INCLUDE_DIR	=	includes

SRC			=	ft_putchar.c        \
				ft_putstr.c			\
				ft_strcmp.c			\
				ft_strlen.c			\
				ft_swap.c

OBJ_DIR		=	objs
OBJ			=	$(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

COMPILER	=	gcc
CFLAGS		=	-Wall -Wextra -Werror -I$(INCLUDE_DIR) -c

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $@

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(COMPILER) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJ)
	rm -df $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
