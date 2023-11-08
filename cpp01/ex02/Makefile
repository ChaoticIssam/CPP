NAME = Brain
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SOURCE = main.cpp\

OBJECTS = ${SOURCE:.cpp=.o}
all: $(NAME)
$(NAME): $(OBJECTS)
			$(CC) $(FLAGS) $(SOURCE) -o $(NAME)
clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME)
re:	fclean all 