SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putmem.c \
	  ft_putnbr.c \
	  ft_putnbrbase.c \
	  ft_putstr.c \
	  ft_strlen.c \
	  ft_puthexa.c \

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re