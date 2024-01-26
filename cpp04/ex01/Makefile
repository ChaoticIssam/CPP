NAME = Animal
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
RM = rm -rf

SOURCES = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp\

OBJECTS = ${SOURCES:.cpp=.o}
all: $(NAME)
$(NAME): $(OBJECTS)
			$(CXX) $(CXXFLAGS) $(SOURCES) -o $(NAME)
clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME)
re:	fclean all