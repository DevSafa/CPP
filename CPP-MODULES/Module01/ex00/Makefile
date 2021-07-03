.PHONY: all clean fclean re

NAME = zombie

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@g++ $(CPPFLAGS) $(CPPVERSION)  \
		main.cpp \
		newZombie.cpp	\
		randomChump.cpp	\
		Zombie.cpp	\
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all