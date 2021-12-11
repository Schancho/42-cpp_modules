NAME = megaphone

SRC = megaphone.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror

CPPV = -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(CC)  $(FLAGS) $(CPPV)  $(SRC) -o $(NAME)
clean:
	@rm -rf *.o
fclean: clean
	@rm -rf $(NAME)
re: fclean all