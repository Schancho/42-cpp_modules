
NAME	= phonebook
CC		= clang++ --std=c++98
FLAGS	= -Wall -Werror -Wextra
SRCS 	= phonebook.cpp contact.cpp

$(NAME):
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

