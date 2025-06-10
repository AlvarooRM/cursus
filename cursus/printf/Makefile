# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvrodr2 <alvrodr2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 11:14:20 by alvrodr2          #+#    #+#              #
#    Updated: 2025/06/02 14:25:47 by alvrodr2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

SRCS		= ft_printf.c \
			  print_char.c \
			  print_string.c \
			  print_pointer.c \
			  print_int.c \
			  print_unsigned.c \
			  print_hex.c \
			  print_format.c \

OBJS		= $(SRCS:.c=.o)

# Bonus files
BONUS_SRCS	= bonus/ft_bonus_flags.c
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

# Libft
LIBFT_DIR	= libft
LIBFT_A		= $(LIBFT_DIR)/libft.a

# Colors (optional)
GREEN		= \033[0;32m
RESET		= \033[0m

all: $(LIBFT_A) $(NAME)

$(LIBFT_A):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)



clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re bonus
