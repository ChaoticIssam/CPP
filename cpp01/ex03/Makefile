NAME = Attack
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SOURCES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp\

OBJECTS = ${SOURCES:.cpp=.o}
all: $(NAME)
$(NAME): $(SOURCES)
			$(CC) $(FLAGS) -fsanitize=address -g3 -o $(NAME) $(SOURCES)
clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME)
re:	fclean all