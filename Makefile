CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_print_char.c \
      ft_print_int.c \
	  ft_print_uint.c \
	  ft_printf.c \
	  ft_test_format.c \
	  ft_print_str.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.phony : all clean fclean re