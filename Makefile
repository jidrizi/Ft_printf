# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 14:37:45 by jidrizi           #+#    #+#              #
#    Updated: 2024/04/10 01:34:04 by jidrizi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -std=c99

SRC =  ft_printf.c coolfunctions.c hexshii.c 

OBJS = $(SRC:.c=.o)

NAME = libftprintf.a 

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@echo "ah men"

fclean: clean
	@rm -f $(NAME)
	@echo "oh men"
	
re: fclean all

.PHONY: all clean fclean re
