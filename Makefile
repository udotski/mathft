NAME = libmathft.a
HEADER = mathft.h
FLAGS = -Wall -Wextra -Werror

SRCS =  ft_sq.c ft_sqrt.c ft_factorial.c \
        ft_range.c ft_is_negative.c ft_putchar.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rs $(NAME) $(OBJS)

%.o: %.c $(HEADER) Makefile
	cc $(FLAGS) -I. -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
