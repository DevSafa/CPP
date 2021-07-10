.PHONY: all clean fclean re

NAME = materia

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@g++ $(CPPVERSION)  \
		main.cpp \
		Ice.cpp \
		Cure.cpp \
		AMateria.cpp \
		Character.cpp \
		MateriaSource.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all