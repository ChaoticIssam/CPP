NAME = PmergeMe
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SOURCES = main.cpp PmergeMe.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS)
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all