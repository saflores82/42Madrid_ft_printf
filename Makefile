# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saflores <saflores@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 09:03:52 by saflores          #+#    #+#              #
#    Updated: 2024/07/18 11:01:54 by saflores         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_print_sfo
SRCS = ft_printf.c \
       main.c
OBJS = $(SRCS:.c=.o)
LIBFT = libft/libft.a
INCLUDES = -Ilibft -I.

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -no-pie $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C libft
	@echo "Library libft.a built successfully!"

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re
