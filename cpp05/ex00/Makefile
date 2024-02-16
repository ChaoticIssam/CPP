NAME = Bureaucrat
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SOURCES = main.cpp Bureaucrat.cpp\

OBJECTS = ${SOURCES:.cpp=.o}
<<<<<<< HEAD

=======
>>>>>>> b77d12f1a4bac5578e8b021f8de8dc20acce85da
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(NAME)
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all