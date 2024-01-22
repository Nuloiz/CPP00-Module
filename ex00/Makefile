NAME := megaphone

CC := gcc -g

CPPFLAGS := -Wall -Wextra -Werror -g3 -std=c++98

SRC := megaphone.cpp


INCLUDES := -I includes

OBJ := $(SRC:%.cpp=$(OBJ)%.o)

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)


clean:
		rm -r $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
