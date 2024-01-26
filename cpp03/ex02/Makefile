NAME = ClapTrap
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SOURCES = main.cpp ClapTrap.cpp ScravTrap.cpp FragTrap.cpp\

OBJECTS = ${SOURCES:.cpp=.o}
all: $(NAME)
$(NAME): $(OBJECTS)
			$(CXX) $(CXXFLAGS) $(SOURCES) -o $(NAME)
clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME)
re:	fclean all