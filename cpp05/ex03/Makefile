NAME = Bureaucrat
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
SOURCES = main.cpp Bureaucrat.cpp\
			AForm.cpp ShrubberyCreationForm.cpp\
				RobotomyRequestForm.cpp PresidentialPardonForm.cpp\
					intern.cpp\

OBJECTS = ${SOURCES:.cpp=.o}
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(NAME)
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all