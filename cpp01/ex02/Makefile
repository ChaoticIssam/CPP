NAME = Brain
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SOURCE = main.cpp\

OBJECT = ${SOURCE:.cpp=.o}
all: $(NAME)
$(NAME): $(SOURCE)
			$(CC) $(FLAGS) -o $(NAME) $(SOURCE)
clean:
		$(RM) $(OBJECT)
fclean: clean
		$(RM) $(NAME)
re:	fclean all 