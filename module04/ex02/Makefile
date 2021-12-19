NAME	= abstract
CC		= clang++  -g  --std=c++98 
FLAGS	= #-Wall -Werror -Wextra
SRCS 	= Animal.cpp main.cpp Cat.cpp Dog.cpp Brain.cpp

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