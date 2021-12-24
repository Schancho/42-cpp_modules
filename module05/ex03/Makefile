NAME	= Intern
CC		= clang++ --std=c++98 
FLAGS	= #-Wall -Werror -Wextra
SRCS 	= Bureaucrat.cpp Form.cpp main.cpp Intern.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp

$(NAME):
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

run: fclean all
	@./$(NAME)