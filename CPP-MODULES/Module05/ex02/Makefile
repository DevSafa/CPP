.PHONY: all clean fclean re

NAME = form

CPPFLAGS = # -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@clang++ $(CPPFLAGS) $(CPPVERSION)  \
		Bureaucrat.cpp \
		main.cpp \
		Form.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all