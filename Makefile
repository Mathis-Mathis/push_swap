# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/06 15:35:02 by mmousli           #+#    #+#              #
#    Updated: 2026/02/24 08:30:14 by mmousli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INC 		= -Iinclude

SRC_DIR 	= src
BUILD_DIR 	= build

# **************************************************************************** #

SRCS = \
	$(SRC_DIR)/main.c \
	$(SRC_DIR)/error/error.c \
	$(SRC_DIR)/node/node.c \
	$(SRC_DIR)/utils/ft_atol.c \
	$(SRC_DIR)/logic/push.c \
	$(SRC_DIR)/logic/swap.c \
	$(SRC_DIR)/logic/rotate.c \
	$(SRC_DIR)/logic/reverse.c \
	$(SRC_DIR)/parcing/parcing.c \
	$(SRC_DIR)/utils/ft_split.c \
	$(SRC_DIR)/utils/free_split.c \
	$(SRC_DIR)/algo/low/low_sort.c \
	$(SRC_DIR)/algo/low/sort_2_3.c \
	$(SRC_DIR)/algo/low/sort_5.c \



OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c include/push_swap.h
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
