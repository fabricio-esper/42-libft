NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

SRCS = $(wildcard ./ft_*.c)

OBJS = $(SRCS:.c=.o)

.c.o:
	cc $(CFLAGS) -c $< -o $(<:.c=.o) -I ./libft.h

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
