# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 12:07:29 by msakurai          #+#    #+#              #
#    Updated: 2025/08/12 13:33:32 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libftprintf.a

CC			:= cc
AR			:= ar rcs
RM			:= rm -f

CFLAGS		:= -Wall -Wextra -Werror

INCDIR= -I./

SRCS		:= ft_printf.c \
check_conversion.c \
put_conversion.c \
utils.c


OBJS		:= $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCDIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
