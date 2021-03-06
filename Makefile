##
## EPITECH PROJECT, 2019
## makefile
## File description:
## my_printf
##

NAME	=	my_screensaver

SRC	=	src/main.c \
		src/display_h.c \
		src/my_putchar.c \
		src/my_putstr.c \
		src/error_handling.c \
		src/create_window.c \
		src/draw_cloud_of_dots.c \
		src/put_pixels.c \
		src/my_atoi.c \
		src/draw_circles.c \
		src/gest_id.c

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS	=	-l csfml-graphics -lm -I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

TU	:
		$(CC) -o unit_tests lib/my/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *# \
		rm -f *~ \
		rm -f *.gcda \
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all TU clean fclean re
