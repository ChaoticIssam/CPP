NAME = Identify
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
SOURCES = main.cpp Identify.cpp\

OBJECTS = ${SOURCES:cpp = .o}
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(NAME)
clean:
	$(RM) $(OBJECTS)
flcean: clean
	$(RM) $(NAME)
re: fclean all