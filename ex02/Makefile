NAME := account

CC := c++

#CPPFLAGS := -Wall -Wextra -Werror -g3 -std=c++98
CPPFLAGS := -Wall -Wextra -Werror -g3 -std=c++98 -fsanitize=address

SRC := tests.cpp Account.cpp

INCLUDES := -I Account.hpp

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
