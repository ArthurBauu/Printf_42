NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putadrrbase.c ft_putnbr_base.c ft_putlnbr.c ft_putinbr.c ft_putstr.c utils.c
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
		ar rcs $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re