# libft/tests/Makefile
NAME = test_libft
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I../v1
LIBFT = ../v1/libft.a

SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $^ 

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	$(MAKE) -C ../v1

clean:
	rm -f $(OBJS)
	$(MAKE) -C ../v1 clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ../v1 fclean

re: fclean all

.PHONY: all clean fclean re
