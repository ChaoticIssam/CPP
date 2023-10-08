NAME = Phone
CC = c++
CFLAG = -Wall -Werror -Wextra
RM = rm -f
SOURCES = main\
			PhoneBook\
			Contact

all: $(NAME)
$(NAME): $(SOURCES).cpp
			$(CC) $(CFLAG) -o $(NAME) $(SOURCES).cpp
clean:
		$(RM) $(SOURCES).o
fclean: clean
		$(RM) $(NAME)
re:	fclean all