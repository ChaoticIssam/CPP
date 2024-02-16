NAME = Form
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
<<<<<<< HEAD
SOURCES = main.cpp Bureaucrat.cpp Form.cpp\
=======
SOURCES = main.cpp Form.cpp Bureaucrat.cpp\
>>>>>>> b77d12f1a4bac5578e8b021f8de8dc20acce85da

OBJECTS = ${SOURCES:.cpp=.o}
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(NAME)
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all