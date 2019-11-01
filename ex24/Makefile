NAME = libft.a
all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c -I includes/
	ar rc $(NAME) ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
