.PHONY: all clean fclean re

NAME = squad

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@g++ $(CPPVERSION)  \
		main.cpp \
		AssaultTerminator.cpp \
		Squad.cpp \
		TacticalMarine.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all