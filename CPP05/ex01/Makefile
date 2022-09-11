CC := c++

NAME := BureaucratWithForm

FLAGS := -Wall -Wextra -Werror -std=c++98

HEADERS := 	Bureaucrat.hpp \
			Form.hpp

SRC := 	Bureaucrat.cpp 	\
		Form.cpp		\
		main.cpp

OBJ_DIR := obj

OBJ := $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(FLAGS) $< -c -o $@

all: $(OBJ_DIR)
	$(MAKE) -j $(NAME)
$(OBJ_DIR):
	mkdir -p $@

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)
fclean: clean
	rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re