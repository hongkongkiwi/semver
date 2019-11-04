NAME = semver.exe
FLAGS = -Wall -Wextra -Werror
SRCS = src/*.c
OBJS = *.o
INCLUDE = ./includes/libc.h

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -I $(INCLUDE) -c $(SRCS)
	@gcc -o $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all