NAME = Replace
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
SOURCES = main.cpp Replace.cpp\

OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJECTS)
			$(CC) $(FLAGS) $(SOURCES) -o $(NAME) 
clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME) *.replace
re:	fclean all