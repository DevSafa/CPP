.PHONY: all clean fclean re

NAME = karen

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@g++ $(CPPFLAGS) $(CPPVERSION)  \
		main.cpp \
		Karen.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all