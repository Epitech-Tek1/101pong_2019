##
## EPITECH PROJECT, 2019
## Makefile infinadd
## File description:
## No file there, just an epitech header example
##

SRC	=	error_form.c					\
		error_handling.c				\
		is_num.c						\
		my_strlen.c						\
		error_position.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

RM	=	@rm	-f

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc -o $(NAME) $(OBJ)
	mv $(NAME) ../
	$(RM) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) -f $(NAME) $(OBJ)

re: clean fclean all

.PHONY: all clean fclean re
