NAME = Harl
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
SOURCES = main.cpp Harl.cpp
OBJECTS = ${SOURCES:.cpp=.o}
all: $(NAME)
$(NAME): $(OBJECTS)
			$(CC) $(FLAGS) $(SOURCES) -o $(NAME)
clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME)
re:	fclean all