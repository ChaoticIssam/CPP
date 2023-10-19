NAME = Harl
CC = c++
FLAGS = -Wall -Werror -Wextra
RM = rm -rf
SOURCES = main.cpp Harl.cpp
OBJECTS = ${SOURCES:.cpp=.o}
all: $(NAME)
$(NAME): $(SOURCES)
			$(CC) $(FLAGS) -fsanitize=address -g3 -o $(NAME) $(SOURCES)
clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME)
re:	fclean all