NAME = Replace
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
SOURCES = main.cpp replace.cpp\

OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)
$(NAME): $(SOURCES)
			$(CC) $(FLAGS) -o $(NAME) $(SOURCES)
clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME) *.replace
re:	fclean all