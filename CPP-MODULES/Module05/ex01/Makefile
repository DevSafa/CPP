.PHONY: all clean fclean re

NAME = form

CPPFLAGS = # -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@clang++ $(CPPFLAGS) $(CPPVERSION)  \
		Form.cpp \
		Bureaucrat.cpp \
		main.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all