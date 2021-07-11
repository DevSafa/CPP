.PHONY: all clean fclean re

NAME = sorcerer

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@g++ $(CPPFLAGS) $(CPPVERSION)  \
		main.cpp \
		Peon.cpp \
		Sorcerer.cpp \
		Victim.cpp \
		Monster.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all