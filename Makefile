SRC		=	src/Main.cpp			\

NAME		=	BlockMeThat			\

OBJ     	=	$(SRC:.cpp=.o)

CC		?=	g++

RM		=	rm -f

CFLAGS		=	-Wall -Wextra -I./includes

CXXFLAGS	=	-std=c++2a

all:		$(NAME)

debug:		CFLAGS += -g3
debug:		re

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ)  -lpthread -lsfml-graphics -lsfml-window -lsfml-system -lstdc++

clean:
	@find -name "*.gcda" -delete
	@find -name "*.gcno" -delete
	@find -name ".#*" -delete
	@$(RM) $(OBJ)

fclean:		clean
	@$(RM) $(NAME)
	@$(RM) -r *.gcda
	@$(RM) -r *.gnco
	@$(RM) -r *.o
	@$(RM) -r vgcore.*

re:		fclean all

.PHONY:		all clean fclean re