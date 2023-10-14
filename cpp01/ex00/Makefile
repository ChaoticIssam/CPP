NAME = BraiiiiiiinnnzzzZ
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SOURCES = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp\

OBJECTS = ${SOURCES:.cpp=.o}
all: $(NAME)
$(NAME): $(SOURCES)
			$(CC) $(FLAGS) -fsanitize=address -g -o $(NAME) $(SOURCES)
clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME)
re:	fclean all
