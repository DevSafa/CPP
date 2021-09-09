.PHONY: all clean fclean re

NAME = fragTrap

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@clang++ $(CPPFLAGS) $(CPPVERSION)  \
		main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all