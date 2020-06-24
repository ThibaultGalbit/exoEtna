CC		=	gcc

NAME	=	build/etna

SRC		=	main.c				\
			gameplay/gameplay.c

OBJ		=	$(SRC:.c=.o)

FLAGS	=	-Werror	-Wall	-Wextra	-Wpedantic	-std=c11

RM		=	rm	-f


all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CC)	$(FLAGS)	$(OBJ)	-o	$(NAME)

clean	:
			$(RM)	$(OBJ)

fclean	:	clean
			$(RM)	$(NAME)

re		:	fclean all

.PHONY	:	all	clean	fclean	re
