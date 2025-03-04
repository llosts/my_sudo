##
## EPITECH PROJECT, 2024
## B-CPE-110-LIL-1-1-organized-nathan.cheynet
## File description:
## Makefile
##

SRC 		=	src/print_functions.c		\
				src/manage_parsing.c		\

MAIN_SRC 	=	src/main.c

OBJ			=	$(SRC:.c=.o)				\
				$(MAIN_SRC:.c=.o)

CFLAGS		=   -Wall -Wextra -Werror -iquote include
RM			=	rm -f
CC			=	gcc

NAME		=	my_sudo

all:			$(NAME)


$(NAME):		$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		$(RM) $(OBJ)
		$(RM) $(MAIN_OBJ)

fclean:			clean
		$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean all re
