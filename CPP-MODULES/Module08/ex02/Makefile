.PHONY: all clean fclean re

NAME = span

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@clang++   $(CPPVERSION)  \
		main.cpp \
		mutantstack.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all