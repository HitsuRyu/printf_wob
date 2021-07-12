NAME	=	libftprintf.a
HEADER	=	ft_printf.h
SRC		=	ft_printf.c \
			ft_printf_utils.c \
			ft_print_cs.c \
			ft_print_pdiuxX.c
OBJS	=	$(SRC:.c=.o)
LIBFT	=	./libft
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)/
	cp $(LIBFT)/libft.a ./$(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: ./%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT)/ clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT)/ fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re