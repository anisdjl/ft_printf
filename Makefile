CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = #faut mettre les fichiers
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o = %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.phony : all clean fclean re