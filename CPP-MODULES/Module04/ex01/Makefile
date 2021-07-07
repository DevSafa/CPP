.PHONY: all clean fclean re

NAME = kill

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@g++ $(CPPVERSION)  \
		main.cpp \
		AWeapon.cpp \
		PlasmaRifle.cpp \
		PowerFist.cpp \
		Enemy.cpp \
		SuperMutant.cpp \
		RadScorpion.cpp \
		Character.cpp  \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all