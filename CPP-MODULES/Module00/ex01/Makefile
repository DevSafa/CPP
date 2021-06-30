.PHONY: all clean fclean re

NAME = phonebook

CPPFLAGS =  -Wall -Wextra -Werror 
CPPVERSION = -std=c++98

$(NAME):
		@g++ $(CPPFLAGS) $(CPPVERSION)  \
		Contact.cpp \
		PhoneBook.cpp \
		main.cpp \
		 -o $(NAME) 

all : $(NAME)

clean:
	
fclean: 
	@rm -rf $(NAME)

re: fclean all