NAME	= war
CC		= clang++ --std=c++98
FLAGS	= #-Wall -Werror -Wextra
SRCS 	=  Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

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
