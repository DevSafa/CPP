.PHONY: all clean fclean re

NAME = weapon

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@g++ $(CPPFLAGS) $(CPPVERSION)  \
		main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all