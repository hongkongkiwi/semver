# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdimitro                                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/01 07:47:37 by cdimitro          #+#    #+#              #
#    Updated: 2019/11/01 11:02:00 by cdimitro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = semver
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/*.c
OBJS = *.o

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -I ./includes/ -c $(SRCS)
	@gcc -o $(NAME) $(OBJS) -L ./includes/

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
