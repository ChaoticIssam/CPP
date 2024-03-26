NAME = RPN
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3
RM = rm -f
SOURCES = main.cpp RPN.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
