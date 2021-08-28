.PHONY: all clean fclean re

NAME = Form

CPPFLAGS = # -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@clang++ $(CPPFLAGS) $(CPPVERSION)  \
		Bureaucrat.cpp \
		main.cpp \
		Form.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all