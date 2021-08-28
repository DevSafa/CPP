.PHONY: all clean fclean re

NAME = form

CPPFLAGS = # -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@clang++ $(CPPFLAGS) $(CPPVERSION)  \
		bureaucrat.cpp \
		main.cpp \
		form.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all