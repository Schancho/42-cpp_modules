NAME	= FragTrap
CC		= clang++ --std=c++98
FLAGS	= -Wall -Werror -Wextra
SRCS 	= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

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